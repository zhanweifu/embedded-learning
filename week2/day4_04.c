#include<stdio.h>
void my_strcpy(char *dst, const char *src){
    while(*src!='\0'){
        *dst=*src;
        dst++;
        src++;
    }
    *dst='\0';
}
int main(void){
    char s[]="I love you\n";
    char a[99];
    my_strcpy(a,s);
    printf("%s",a);
    return 0;
}