#include<stdio.h>
int gcd(int a, int b){
    int c;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    return(a);
}
int main(void){
    int w,q;
    scanf("%d %d",&q,&w);
    printf("%d",gcd(q,w));
    return 0;
}