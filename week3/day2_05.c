#include<stdio.h>
void swap(int *a,int *b){       //全局变量会导致难以调试和过于随意，轻易改动导致全局出错
    int c=*a;
    *a=*b;
    *b=c;
}
int main(void){
    int q,w;
    scanf("%d %d",&q,&w);
    swap(&q,&w);
    printf("%d %d",q,w);
    return 0;
}