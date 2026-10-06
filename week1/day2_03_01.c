#include<stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d",&a);
    c=0,d=0;
    for(b=8;b>=0;b--){
        c=(a>>b)&1;
        if(c==1)d++;
    }
    printf("%d",d);
    return 0;
}