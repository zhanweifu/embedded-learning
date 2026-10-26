/*
 * day6_00.c — 第 3 周第 6 题「存地址当存值」实跑记录（2026-10-26 晚）
 *
 * 错误版：int *k = q;
 *   实测输出：1 2 2 1
 *   原因：k 拿的是 q 的门牌号，k 和 q 指向同一间房；
 *         `*q = *p` 把 q 那间房的值改掉之后，`*k` 读到的已经是新值，
 *         旧值根本没被保存下来 → 两头都成了 *p 的值，后一半塌掉。
 *
 * 正确版：int k = *q;
 *   实测输出：4 3 2 1
 *   原因：k 是普通 int，存的是「屋里的东西」= 值；
 *         `*p = k` 还回去不需要星号，因为 k 自己就是值。
 *
 * 一句话记牢：int *k 存门牌，int k 存东西。
 */
#include <stdio.h>

   void reverse(int *a, int n) {
       int *p = a, *q = a + n - 1;
       while (p < q) {
           int k = *q;        /* 正确版：存值，不存地址 */
           *q = *p;
           *p = k;
           p++; q--;
       }
   }

   int main(void) {
       int a[4] = {1, 2, 3, 4};
       reverse(a, 4);
       for (int i = 0; i < 4; i++) printf("%d ", a[i]);
       printf("\n");
       return 0;
   }