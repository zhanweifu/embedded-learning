#include<stdio.h>
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    int a;
    scanf("%d",&a);
    (a%4)?(a%100)?(a%400)?printf("%d不是闰年",a):printf("%d是闰年",a):printf("%d不是闰年",a):printf("%d是闰年",a);
    return 0;
}