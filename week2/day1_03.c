#include<stdio.h>
int max3(int a,int b, int c){
    int m,s;
    m=a>b?a:b;
    s=a>c?a:c;
    m=m>s?m:s;
    return(m);
}
int main(void){
    int q,w,e;
    scanf("%d %d %d",&q,&w,&e);
    printf("%d",max3(q,w,e));
    return 0;
}