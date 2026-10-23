#include <stdio.h>

/*
 * Day5 反证：& (size-1) 只有在 size 是 2 的幂时，才和 % size 等价。
 * 这里取 size = 6（不是 2 的幂），让两者正面分家。
 */
int main(void)
{
    int size = 6;
    printf("size = %d  （不是 2 的幂）\n", size);
    printf("%5s %10s %14s   %s\n", "x", "x % size", "x & (size-1)", "一致?");

    for (int x = 0; x < 18; x++) {
        int a = x % size;
        int b = x & (size - 1);
        printf("%5d %10d %14d   %s\n", x, a, b, a == b ? "yes" : "NO  <-- 分家了");
    }

    /* 对照：size = 8 是 2 的幂，两者永远一致 */
    size = 8;
    int bad = 0;
    for (int x = 0; x < 1000; x++)
        if (x % size != (x & (size - 1)))
            bad++;
    printf("\nsize = 8（2^3）：x 取 0..999，不一致次数 = %d\n", bad);

    return 0;
}
