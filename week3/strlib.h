#ifndef STRLIB_H
#define STRLIB_H

#include <stddef.h>   /* size_t 在这里 */

/* 返回字符串长度（不含 '\0'）。传 NULL 返回 0。 */
size_t my_strlen(const char *s);
    
/* 把 src 连 '\0' 一起拷到 dst，返回 dst 原地址。dst 或 src 为 NULL 返回 NULL。 */
char *my_strcpy(char *dst, const char *src);

/* 比较两串：a<b 返回负数，相等返回 0，a>b 返回正数。有 NULL 时按 0 处理比。 */
int my_strcmp(const char *a, const char *b);

/* 把 src 接到 dst 末尾（覆盖 dst 原本的 '\0'），返回 dst 原地址。NULL 返回 NULL。 */
char *my_strcat(char *dst, const char *src);

/* 找 c 第一次出现的位置，返回该处指针；找不到返回 NULL。c=='\0' 返回指向结尾字符的指针。 */
char *my_strchr(const char *s, char c);

#endif