#include<stdio.h>
int is_prime(int n){
    int b,c;
    for(b=2;b<=(n/2);b++){
    if((n%b)==0) c=1;
    }
    return (c);
}
int main(void){
    int a;
    scanf("%d",&a);
    if((is_prime(a))==1||a<2) printf("no");
    else printf("yes");
    return 0;
}