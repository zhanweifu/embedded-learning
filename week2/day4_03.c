#include<stdio.h>
int my_strlen(const char *s){
    int n=0;
    while(*s !='\0'){
    n++;
    s++;
    }
    return (n);
}
int main(void){
    char c[]={"nice to see you"};
    printf("%d",my_strlen(c));
    return 0;
}