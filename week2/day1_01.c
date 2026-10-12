#include<stdio.h>
int add(int a,int b){
    int x;
    x=a+b;
    return(x);
}
int main(void){
    int q,w;
    scanf("%d %d",&w,&q);
    printf("%d",add(q,w));
}