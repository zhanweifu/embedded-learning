#include<stdio.h>
#include<stdlib.h>
char *my_strcat(char *dst, const char *src){
    char *ret=dst;
    while (*dst) dst++;      // 任务 ①：把笔挪到 dst 末尾
    while (*src) {                 // 任务 ②：抄 src（跟 strcpy 一样）
        *dst = *src;
        dst++; src++;
    }
    *dst = *src;                             // 任务 ③：别忘了那口 '\0'
    return ret;
}
int main(void) {
    system("chcp 65001");
    char buf[64] = "foo";
    my_strcat(buf, "bar");
    printf("1) %s\n", buf);
    my_strcat(buf, "");
    printf("2) %s\n", buf);my_strcat(my_strcat(buf, "-"), "end");
    printf("3) %s\n", buf);
    return 0;
}