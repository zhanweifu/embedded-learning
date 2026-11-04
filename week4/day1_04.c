#include<stdio.h>
int main(void){
    int x = 7;  int *p = &x;  int **pp = &p;
    printf("%d\n",x);       //正常变量
    printf("%p\n",p);       //x的地址   门牌
    printf("%d\n",*p);      //x的内容
    printf("%d\n",**pp);    //顺着两道门牌摸到的东西
    printf("%p\n",pp);      //p 这张门牌自己的地址
    **pp = 99;
    printf("%d\n",x);
    return 0;
}