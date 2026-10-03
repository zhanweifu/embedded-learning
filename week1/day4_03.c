#include<stdio.h>
int main(void){
    long long int a,b,c;
    scanf("%lld",&a);
    b=1,c=1;
    for(;b<=a;b++)
    c=c*b;
    printf("%lld",c);
    return 0;
}