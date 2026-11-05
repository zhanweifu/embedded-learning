#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;    
}
int mul(int a,int b){
    return a*b;
}
int apply(int (*f)(int,int), int a, int b){
    return f(a, b);
}
int main(void){
    int (*op)(int,int) = add;
    printf("%d\n",op(3,4));
    printf("%d\n",(*op)(3,4));
    printf("%p\n", (void *)add);
    printf("%p\n", (void *)&add);
    printf("add=%d sub=%d mul=%d\n",apply(add,3,4), apply(sub,3,4), apply(mul,3,4));
    // 第5项：少了括号会怎样（故意写的错误示范，编译时已注释掉）
    // int *op2(int, int) = add;      // op2 是【函数声明】，不是变量！
    // 报错原文：
    //   error: function 'op2' is initialized like a variable
    //   error: nested function 'op2' declared but never defined
    // 正确写法：int (*op2)(int, int) = add;   // 有括号 = 存函数门牌的变量
    return 0;
}