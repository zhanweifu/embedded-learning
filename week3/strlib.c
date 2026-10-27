#include "strlib.h"

size_t my_strlen(const char *s) {
    if (!s) return 0;
    const char *len=s;
    while(*len){
        len++;
    }
    return (len-s);
}

char *my_strcpy(char *dst, const char *src) {
    if (!dst || !src) return NULL;
    char *ret = dst;              /* 先记住原地址，最后还它 */
    while(*src){/* 你的代码：把 src 一个字符一个字符搬到 dst，别忘了 '\0' 也要搬 */
    *dst=*src;
    dst++;
    src++;
    }
    *dst=*src;
    return ret;
}