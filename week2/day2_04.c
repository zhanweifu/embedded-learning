#include<stdio.h>
int is_prime(int n){
    int b,c;
    c=0;
    if(n<2) return 0;
    for(b=2;b<=(n/2);b++)
        if((n%b)==0) return 0;
    return 1;
}
int main(void){
    int a;
    scanf("%d",&a);
    if(is_prime(a)) printf("yes");
    else printf("no");
    return 0;
}