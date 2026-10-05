#include<stdio.h>
int main(void){
    int a=1,b=1,i,c=1;
    for(;c<=20;){
        printf("%d  ",a);
        i=a;
        a=b;
        b=i+b;
        c++;
    }
    return 0;
}