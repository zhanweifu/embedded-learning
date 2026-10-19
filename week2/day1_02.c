#include<stdlib.h>
#include<stdio.h>
int is_even(int n){
    return(((n&1)+1)%2);
}
int main(void){
    system("chcp 65001");
    int i;
    scanf("%d",&i);
    if(is_even(i)) printf("奇数");
    else printf("偶数");
    return 0;
}