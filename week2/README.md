# week2 · 第 2 周代码

> 时间：2026/10/12（周一）~ 10/18（周日）
> 主题：函数与数组 + 手写环形缓冲区（Ring Buffer）
> 课程任务：`周任务/第2周任务.md`
> **全部在 PC 上用 gcc 跑通，不需要任何硬件。**

---

## 文件命名规则

```
week2/dayM_XX.c      M = 第几天（1~7），XX = 当天第几个程序
```

例：`week2/day3_04.c` = 第 2 周第 3 天（一维数组）的第 4 个练习（冒泡排序）。

本周核心产物：`week2/ringbuf.c`（环形缓冲实现 + 测试 `main`）。

---

## 本周目标：累计 ≥ 20 个 `.c` + 可运行的 ringbuf.c

| 天 | 日期 | 内容 |
|----|------|------|
| Day1 | 10/12 | 函数基础（声明/返回/void） |
| Day2 | 10/13 | 参数传递（值传递）、作用域、static |
| Day3 | 10/14 | 一维数组（遍历/逆序/查找/冒泡） |
| Day4 | 10/15 | 二维数组 + 字符串初步（手写 strlen/strcpy） |
| Day5 | 10/16 | 环形缓冲原理 + 骨架 |
| Day6 | 10/17 | 环形缓冲完整实现 + 测试（6h） |
| Day7 | 10/18 | 周检测 + 验收（6h） |

---

## 编译运行（PowerShell）

```powershell
cd week2
gcc day1_01.c -o day1_01.exe -Wall
.\day1_01.exe
```

环形缓冲单独编译：

```powershell
gcc ringbuf.c -o ringbuf.exe -Wall
.\ringbuf.exe
```

---

## 编译运行（bash / Git Bash）

```bash
cd week2
gcc day1_01.c -o day1_01.exe -Wall && ./day1_01.exe
gcc ringbuf.c -o ringbuf.exe -Wall && ./ringbuf.exe
```
