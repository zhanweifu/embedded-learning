#include<stdio.h>
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    int a,b,c,d;
    printf("输入秒数：\n");
    scanf("%d",&a);
    b=a/(60*60);
    c=(a-b*60*60)/60;
    d=a%60;
    printf("现在是%d:%d:%d\n",b,c,d);
    return 0;
}