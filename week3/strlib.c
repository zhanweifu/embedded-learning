#include "strlib.h"

size_t my_strlen(const char *s) {   //返回值代表s的长度
    if (!s) return 0;
    const char *len=s;
    while(*len){
        len++;
    }
    return (len-s);
}

char *my_strcpy(char *dst, const char *src) {      //返回值代表复制过src的dst
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

int my_strcmp(const char *a,const char *b){     //返回值代表a与b的差值
    if (!a) a = "";
    if (!b) b = "";
    while (*a==*b && *a!='\0'){
        a++;
        b++;
    }
    return (*a-*b);
}

char *my_strcat(char *dst,const char *src){     //返回值代表衔接好src的dst
    if(!dst||!src) return NULL;
    char *ret=dst;
    while(*dst!='\0'){
    dst++;}
    while(*src!='\0'){
    *dst++ = *src++;}
    *dst = *src;
    return ret;
}