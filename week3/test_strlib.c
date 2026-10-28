#include<stdio.h>
#include"strlib.h"
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    char buf[64];
    char a[]="hello";
    printf("len(hello) 期望 5 实际%d\n",(int)my_strlen(a));
    my_strcpy(buf,"hello");
    printf("buf 期望 hello 实际%s\n",buf);
    printf("buf[5] 期望 0 实际%d\n",buf[5]);

    char b[]="";
    printf("len(\"\") 期望0 实际%d\n",(int)my_strlen(b));
    my_strcpy(buf,"");
    printf("buf 期望 (空) 实际%s\n",buf);

    char c[]={"a"};
    printf("len(a) 期望 1 实际%d\n",(int)my_strlen(c));
    my_strcpy(buf,"a");
    printf("buf 期望 a 实际%s\n",buf);

    char d[]={"嵌入式"};
    printf("len(嵌入式) 期望 9 实际%d\n",(int)my_strlen(d));
    my_strcpy(buf,"嵌入式");
    printf("buf 期望 嵌入式 实际%s\n",buf);

    printf("len(NULL) 期望 0 实际%d\n",(int)my_strlen(NULL));
    my_strcpy(buf,NULL);
    my_strcpy(NULL,"x");
    printf("copy(buf,NULL) 期望 NULL 实际%s\n", my_strcpy(buf,NULL) == NULL ? "NULL" : "不是");

     char *r = my_strcpy(buf, "hello");
     printf("返回值==buf? %d\n", r == buf);   /* 期望 1 */

    printf("期望 -1   实际%d\n",my_strcmp("abc","abd"));
    printf("期望 0   实际%d\n",my_strcmp("abc","abc"));
    printf("期望 负数   实际%d\n",my_strcmp("ab","abc"));
    printf("期望 正数   实际%d\n",my_strcmp("abc","ab"));
    char s1[32] = "foo";
    printf("期望 foobar   实际 %s\n", my_strcat(s1, "bar"));   // 链式接 "-end" 也在同一个 s1 上
    printf("期望 foobar-end   实际 %s\n", my_strcat(s1, "-end"));
    printf("期望 NULL   实际 %s\n",my_strcat(s1,NULL) == NULL ? "NULL" : "不是");
    printf("期望 10   实际 %d\n", (int)my_strlen(s1));
    char s2[32] = "foo";
    printf("期望 foo      实际 %s\n", my_strcat(s2, ""));
    return 0;
}