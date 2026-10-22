#include<stdio.h>
#include<stdlib.h>
char *my_strcpy(char *dst, const char *src){
    char *ret=dst;
    while (*src){
        *dst=*src;
        dst++;
        src++;
    } 
    *dst=*src;
    return ret;
}
int main(void){
    system("chcp 65001");
    char buf[32];
    const char *src = "hello嵌入式";
    char *ret = my_strcpy(buf, src);
    printf("buf=\"%s\"\n", buf);
    printf("buf[5]=%d  buf[6]=%d\n", buf[5], buf[6]);
    printf("返回值和 buf 一样吗：%s\n", (ret == buf) ? "是" : "不是");
    return 0;
}