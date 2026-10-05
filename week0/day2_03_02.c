#include<stdio.h>
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    int a;
    scanf("%d",&a);
    if ((a&1)==0){
        printf("%d是偶数",a);
    }else printf("%d是奇数",a);
}