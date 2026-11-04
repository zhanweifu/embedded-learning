#include<stdio.h>
int main(void){
    int x = 7;  int *p = &x;  int **pp = &p;
    printf("%d\n",x);       //正常变量
    printf("%p\n",p);       //x的地址   门牌
    printf("%d\n",*p);      //x的内容
    printf("%d\n",**pp);    //p的内容，即x的内容  门牌
    printf("%p\n",pp);      //p的地址
    **pp = 99;
    printf("%d\n",x);
    return 0;
}