/* 本文件故意编译失败：第3周 Day3 第6题 */
#include<stdio.h>
int main(void){
    int a[3] = {1, 2, 3};        //error: lvalue required as increment operand a++;
    a++;        //a[]是数组，相当于容器。而单纯的a什么都不是，它本身没有东西，只是对&a[0]的换名。怎么能叫一个名字自增呢
    return 0;
}