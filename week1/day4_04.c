#include<stdio.h>
int main(void){
    int a,b,c;
    a=1,b=1,c=1;
    for(;a<=9,c<=9;){
        for(b=1;b<=9;b++){
        printf("%d*%d=%d ",a,b,a*b);}
        printf("\n");
        c++,a++;
    }
    return 0;
}