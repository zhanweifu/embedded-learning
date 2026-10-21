#include<stdio.h>
int main(void){
    char *p = "hello";
    p[0] = 'H'; 
    char s[] = "hello"; s[0] = 'H';     //见到了。指针是指向“hello”的，本身是空虚无物的。
    printf("%c",s[0]);
    return 0;
}