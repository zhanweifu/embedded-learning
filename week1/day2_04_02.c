#include<stdio.h>
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    int a,b,c;
    printf("需要的数：\n第几位:\n");
    scanf("%d %d",&a,&b);
    c=a;
    c &=~(1<<b);
    printf("结果是%d",c);
    return 0;
}