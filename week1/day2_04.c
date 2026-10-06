#include<stdio.h>
int main(void){
    int q,w;
    scanf("%d %d",&q,&w);
    if (q==w) printf("error");
    q^=w,w^=q,q^=w;
    printf("%d %d",q,w);
    return 0;
}