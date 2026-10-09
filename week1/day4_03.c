#include<stdio.h>
int main(void){
    int m,re,n;
    scanf("%d",&m);
    n=m;
    re=0;
    while(m!=0){
        re=re*10+m%10;
        m=m/10;
    }
    if(re==n)printf("%d is hui",n);
    else printf("no");
    return 0;
}