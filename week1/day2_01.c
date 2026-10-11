#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d",&a);
    for(b=7;b>=0;b--){
        c=(a>>b)&1;
        printf("%d",c);
    }
    return 0;
}