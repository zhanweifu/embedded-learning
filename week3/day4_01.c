// my_strcmp：返回 <0 表示 a<b，0 表示相等，>0 表示 a>b
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
size_t my_strlen_a(const char *s){
    size_t i=0;
    while(s[i]!='\0')
    i++;
    return i;
}
size_t my_strlen_p(const char *s){
    const char *p = s;
    while (*p){
        p++;
    }
    return (p-s);
}
int main(void){
    system("chcp 65001");
    const char *a[3]={"hello","","a"};
    for(int i=0;i<3;i++){
        printf("[%s] 下标=%d 指针=%d\n", 
            a[i],
            (int)my_strlen_a(a[i]),
            (int)my_strlen_p(a[i]));
    }
    return 0;
}