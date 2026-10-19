#include<stdio.h>
int main(void){
    int x=42;   //&是取地址符；*是指针，可以指向指定地址
    int z=9;
    int y=521;
    printf("%d %p\n",x,(void*)&x);
    printf("%d %p\n",y,(void*)&y);
    printf("%d %p\n",z,(void*)&z);
    int *p=&x;
    *p=100;
    printf("%d",x);
    return 0;
}