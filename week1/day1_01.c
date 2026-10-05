#include<stdio.h>
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    int a,b;
    b=52;
    printf("猜数字游戏！请输入数字：\n");
    scanf("%d",&a);
    while(a!=b)
    {printf("猜错啦！\n请输入数字:\n");
    scanf("%d",&a);
    }
    printf("猜对啦");
    return 0;
}