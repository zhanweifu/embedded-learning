#include<stdio.h>
int temp=0;
int main(void){
    int q,w;
    scanf("%d %d",&q,&w);
    temp=q;
    q=w;
    w=temp;
    printf("%d %d",q,w);
    return 0;
}