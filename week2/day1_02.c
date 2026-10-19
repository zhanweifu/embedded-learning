#include<stdlib.h>
#include<stdio.h>
int is_even(int n){
    return((n&1)==0);
}
int main(void){
    system("chcp 65001");
    int i;
    scanf("%d",&i);
    if(is_even(i)) printf("偶数");
    else printf("奇数");
    return 0;
}