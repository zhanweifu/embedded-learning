#include<stdio.h>
int add(int a,int b){
    int c;
    c=a+b;
    return(c);
}
int sub(int a,int b){
    int c;
    c=a-b;
    return(c);
}
int mul(int a,int b){
    int c;
    c=a*b;
    return(c);
}
int div(int a,int b){
    int c;
    if(b!=0) c=a/b;
    else printf("no 0");
    return(c);
}
int main(void){
    int q,w;
    scanf("%d %d",&q,&w);
    printf("%d\n%d\n%d\n%d\n",add(q,w),sub(q,w),mul(q,w),div(q,w));
    return 0;
}