#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("chcp 65001");
    char name[500];
    int b;
    float c;
    printf("请输入您的姓名，年龄，成绩:\n");
    scanf("%s %i %f", name, &b, &c);
    printf("姓名%s\n年龄%i\n成绩%f\n",name,b,c);
    getchar();
    getchar();
    getchar();
    getchar();
    return 0;
}