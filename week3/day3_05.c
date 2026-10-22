#include<stdio.h>
int main(void){
    char s[] = "hello"; s[0] = 'H';     //见到了。**指向只读段，能指不能改**
    printf("%c",s[0]);
    return 0;
}