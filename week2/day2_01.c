#include<stdio.h>
void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
}
int main(void){
    int q,w;
    scanf("%d %d",&q,&w);
    swap(q,w);
    printf("%d %d\n",q,w);
    return 0;
}