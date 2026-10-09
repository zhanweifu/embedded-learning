#include<stdio.h>
int main(void){
    int a,c,b=0,sum;
    sum=0;
    c=0;
    scanf("%d",&a);
    while(a!=0){
        sum=sum+a;
        b++;
        c=sum/b;
        scanf("%d",&a);
    }
    if(b!=0)printf("%d %d",c,sum);
    return 0;
}