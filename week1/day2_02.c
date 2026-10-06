#include<stdio.h>
int main(void){
    int x,n,i;
    scanf("%d %d",&x,&n);
    i=(x|(1<<n));printf("%d\n",i);
    i=(x&~(1<<n));printf("%d\n",i);
    i=(x^(1<<n));printf("%d\n",i);
    i=((x>>n)&1);printf("%d\n",i);
    return 0;
}