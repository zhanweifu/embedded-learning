#include<stdio.h>
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    int a,b;
    b=2;
    scanf("%d",&a);
    if (a%b==0){
    printf("%d是偶数",a);
    }else printf("%d是奇数",a);
    return 0;
}
