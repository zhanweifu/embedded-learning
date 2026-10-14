#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
陪练人设 · 继承与演化系统
================================
让「我」（AI）和「你」的相处风格跨对话留存，并随聊天缓慢变化。

分工（重要）：
  - 感知/总结 = AI：每次对话结束，由 AI 评估这次互动的风格，给 0~1 的分。
  - 存储/平滑 = 本程序：用指数移动平均(EMA) 吸收新分，alpha 越小变化越慢。
  - 加载/生效 = AI：每次开新对话，先读 07_陪练人设.md，照着开口。

用法：
  python 工具/persona.py show
  python 工具/persona.py log --summary "他有点受挫，我多鼓励了" \
        --warm 0.8 --strict 0.3 --concise 0.6 --humor 0.2 --patience 0.9
  python 工具/persona.py setcore "我是老王的嵌入式陪练，说话像朋友。"
  python 工具/persona.py history 5
  python 工具/persona.py reset
"""
import argparse
import datetime
import json
import sys
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent   # 嵌入式学习/
STATE = BASE / "人设.json"                       # 机器读的状态
HISTORY = BASE / "人设历史.md"                   # 人类看的流水
PERSONA = BASE / "07_陪练人设.md"                # AI 每次加载的人设

# 五个性格维度：(键, 中文名, 低/中/高三档的行为描述)
TRAITS = [
    ("warm",     "温柔度", ["偏冷静、就事论事", "该鼓励就鼓励，但不腻", "先接住情绪再讲题，多鼓励"]),
    ("strict",   "严格度", ["宽松，完成度够就行", "该纠错就纠错，不放过明显 bug", "很严格，盯着每个细节和硬规矩"]),
    ("concise",  "简洁度", ["愿意展开，把来龙去脉讲清", "要点式回答，适度解释", "极简，结论先行，能一句不两句"]),
    ("humor",    "幽默度", ["正经", "偶尔抖个机灵", "轻松幽默，爱开玩笑"]),
    ("patience", "耐心度", ["节奏偏快，会推着往前走", "按你的节奏来", "非常耐心，卡住就拆小步慢慢来"]),
]

DEFAULTS = {
    "version": 0,
    "alpha": 0.3,                       # 平滑系数：0.3 表示新观测只占三成，变化慢
    "core": "我是老王的嵌入式陪练，说话像朋友，目标是把他带进嵌入式这一行。",
    "traits": {"warm": 0.5, "strict": 0.5, "concise": 0.6, "humor": 0.3, "patience": 0.6},
    "history": [],
}


def level(v):
    """0=低，1=中，2=高"""
    return 0 if v < 0.34 else (1 if v < 0.67 else 2)


def load_state():
    if STATE.exists():
        s = json.loads(STATE.read_text(encoding="utf-8"))
    else:
        s = json.loads(json.dumps(DEFAULTS))       # 深拷贝
    s.setdefault("alpha", DEFAULTS["alpha"])
    s.setdefault("core", DEFAULTS["core"])
    s.setdefault("version", 0)
    s.setdefault("history", [])
    s["traits"] = {**DEFAULTS["traits"], **s.get("traits", {})}
    return s


def save_state(s):
    STATE.write_text(json.dumps(s, ensure_ascii=False, indent=2), encoding="utf-8")


def render_history(s):
    if not s["history"]:
        return "# 人设历史\n\n_（还没有记录，第一次「收工」后就会出现）_\n"
    out = ["# 人设历史\n", "> 每次对话结束记录一条：AI 给风格打分，程序做平滑。\n"]
    for h in reversed(s["history"]):
        sc = " ".join(f"{n}{h['scores'][k]:.2f}" for k, n, _ in TRAITS if k in h["scores"])
        out.append(f"\n## {h['ts']}\n")
        out.append(f"- 风格评分：{sc}\n")
        out.append(f"- 总结：{h['summary']}\n")
    return "".join(out)


def render_persona(s):
    L = []
    L.append("# 07 · 陪练人设（自动生成，勿手改）\n")
    L.append("> 本文件由 `工具/persona.py` 生成；每次新对话，AI 先读它再开口。\n")
    L.append(f"> 版本：v{s['version']}　平滑系数 alpha={s['alpha']}（越小变化越慢）\n")
    L.append("\n## 核心设定\n\n")
    L.append(s["core"] + "\n")
    L.append("\n## 当前性格参数\n\n")
    L.append("| 维度 | 数值 | 档位 |\n|------|------|------|\n")
    for k, n, _ in TRAITS:
        v = s["traits"][k]
        L.append(f"| {n} | {v:.2f} | {'低' if level(v) == 0 else '中' if level(v) == 1 else '高'} |\n")
    L.append("\n## 行为指引（AI 照此说话）\n\n")
    for k, n, desc in TRAITS:
        L.append(f"- **{n}**：{desc[level(s['traits'][k])]}\n")
    L.append("\n## 近期演化（最近 5 次）\n")
    if s["history"]:
        for h in s["history"][-5:]:
            L.append(f"\n### {h['ts']}\n\n{h['summary']}\n")
    else:
        L.append("\n_（还没有记录，第一次「收工」后就会出现）_\n")
    return "".join(L)


def write_all(s):
    save_state(s)
    HISTORY.write_text(render_history(s), encoding="utf-8")
    PERSONA.write_text(render_persona(s), encoding="utf-8")


def cmd_show(s):
    print(render_persona(s))


def cmd_history(s, n):
    for h in s["history"][-n:]:
        sc = " ".join(f"{nm}{h['scores'][k]:.2f}" for k, nm, _ in TRAITS if k in h["scores"])
        print(f"[{h['ts']}] {h['summary']}   ({sc})")
    if not s["history"]:
        print("（还没有记录）")


def cmd_log(s, args):
    scores = {}
    for k, n, _ in TRAITS:
        val = getattr(args, k)
        if val is not None:
            val = max(0.0, min(1.0, float(val)))
            s["traits"][k] = round(s["alpha"] * val + (1 - s["alpha"]) * s["traits"][k], 3)
            scores[k] = round(val, 3)      # 记录本次「观测值」，不是平滑后的值
    ts = datetime.datetime.now().strftime("%Y-%m-%d %H:%M")
    s["version"] += 1
    s["history"].append({"ts": ts, "summary": args.summary, "scores": scores})
    write_all(s)
    print(f"已记录 v{s['version']} @ {ts}")
    cmd_history(s, 3)


def cmd_setcore(s, core):
    s["core"] = core
    s["version"] += 1
    write_all(s)
    print("核心设定已更新。")


def cmd_reset(s):
    s.update(json.loads(json.dumps(DEFAULTS)))
    write_all(s)
    print("已重置为人设出厂值。")


def main():
    p = argparse.ArgumentParser(description="陪练人设 · 继承与演化")
    sub = p.add_subparsers(dest="cmd")

    sub.add_parser("show", help="打印当前人设")

    ph = sub.add_parser("history", help="看最近记录")
    ph.add_argument("n", nargs="?", type=int, default=5)

    pl = sub.add_parser("log", help="记录一次对话风格并平滑演化")
    pl.add_argument("--summary", required=True, help="这次对话的一句话总结")
    for k, _, _ in TRAITS:
        pl.add_argument(f"--{k}", type=float, default=None, help=f"{k} 本次观测值 0~1")

    pc = sub.add_parser("setcore", help="设置核心设定")
    pc.add_argument("core")

    sub.add_parser("reset", help="重置")

    args = p.parse_args()
    s = load_state()
    if args.cmd == "log":
        cmd_log(s, args)
    elif args.cmd == "setcore":
        cmd_setcore(s, args.core)
    elif args.cmd == "reset":
        cmd_reset(s)
    elif args.cmd == "history":
        cmd_history(s, args.n)
    else:
        cmd_show(s)


if __name__ == "__main__":
    if hasattr(sys.stdout, "reconfigure"):
        sys.stdout.reconfigure(encoding="utf-8")
    main()
