#include<stdio.h>
#include"strlib.h"
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    char buf[64];
    char a[]={"hello"};
    printf("len(hello) 期望5 实际%d\n",(int)my_strlen(a));
    my_strcpy(buf,"hello");
    printf("buf 期望 hello 实际%s\n",buf);
    printf("buf[5] 期望 o 实际%d\n",buf[5]);

    char b[]={""};
    printf("%d\n",(int)my_strlen(b));
    my_strcpy(buf,"");
    printf("buf 期望 hello  实际%s\n",buf);

    char c[]={"a"};
    printf("len(a) 期望1 实际%d\n",(int)my_strlen(c));
    my_strcpy(buf,"a");
    printf("buf 期望 hello a 实际%s\n",buf);

    char d[]={"嵌入式"};
    printf("len(嵌入式) 期望9 实际%d\n",(int)my_strlen(d));
    my_strcpy(buf,"嵌入式");
    printf("buf 期望 hello 嵌入式 实际%s\n",buf);

    printf("len(NULL) 期望0 实际%d\n",(int)my_strlen(NULL));
    my_strcpy(buf,NULL);
    my_strcpy(NULL,"x");
    printf("copy(buf,NULL) 期望 NULL 实际%s\n", my_strcpy(buf,NULL) == NULL ? "NULL" : "不是");

     char *r = my_strcpy(buf, "hello");
     printf("返回值==buf? %d\n", r == buf);   /* 期望 1 */

    return 0;
}