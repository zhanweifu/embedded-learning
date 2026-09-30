# Git 常用命令速查（每周上传代码用这个）

仓库位置：`C:\Users\hp\Desktop\嵌入式学习`
GitHub 地址：https://github.com/zhanweifu/embedded-learning

---

## 一、上传代码（push 已改为自动，只需 2 条命令）

> ⚙️ 已配置 `post-commit` 钩子：**你只要 commit，就会自动 push 到 GitHub。**
> 所以现在日常只用前两条，`git push` 不用再手敲。

在 `嵌入式学习` 文件夹打开终端（VS Code 终端最方便），依次输入：

```
git add -A
git commit -m "第1周 Day1：基础语法练习"
```

（若自动 push 偶尔因网络失败，手动补一条 `git push` 即可。）

<details>
<summary>旧的 3 条命令写法（仍可用）</summary>

```
git add -A
git commit -m "第1周：基础语法练习"
git push
```

</details>

> 自动 push 的日志在 `.git/auto-push.log`，出问题时看它。
> 注意：钩子在 `.git/` 里，不会上传到 GitHub；换电脑重新 clone 后需重新配置。

- `git add -A`：把本周新写/改动的文件全部加进来
- `git commit -m "说明"`：打包成一个存档，引号里写这次做了什么
- `git push`：上传到 GitHub

> 第一次之后再也不用登录了，直接就能传。

---

## 二、查看状态（出问题时用）

```
git status        # 看有哪些文件改了、还没提交
git log --oneline # 看提交历史
```

---

## 三、遇到麻烦怎么办

| 现象 | 原因 / 解决 |
|------|-------------|
| `nothing to commit` | 没有新改动，正常 |
| `error: remote origin already exists` | 远程已加过，忽略即可 |
| `failed to push` 且提示 non-fast-forward | 远程有你本地没有的东西，找 AI 帮忙 |
| 弹出登录窗口 | 用 zhanweifu 登录授权 |

---

## 四、提交信息怎么写（方便以后回顾）

好例子：
- `第1周：数据类型与循环 20 个练习`
- `第3周：手写字符串函数`

坏例子：
- `update`、`111`、`提交`（以后看不懂）

---

## 五、什么时候上传

- **每周日下午**复盘时上传一次（推荐）
- 或者每天学完随手 `add + commit + push`

坚持上传的仓库，就是你将来找工作的作品集。
