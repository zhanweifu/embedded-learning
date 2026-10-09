#include<stdio.h>
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    int a,b,c;
    b=52;
    c=1;
    printf("猜数字游戏！请输入数字：\n");
    scanf("%d",&a);
    while(a!=b)
    {printf("猜错啦！\n请输入数字:\n");
    scanf("%d",&a);
    c++;
    }
    printf("猜对啦,你一共猜了%d次!",c);
    return 0;
}