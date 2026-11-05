#include<stdio.h>
int main(void){
    int a[10] = {0};
    int *p = a;
    char res   = *p;             /* 1 */    //能        //*p 是 int，赋给 char 是窄化隐式转换，只在 -Wconversion 下才报（默认 -Wall -Wextra 不报）
    int  t     = (p + 3);        /* 2 */    //不能      //warning: initialization of 'int' from 'int *' makes integer from pointer without a cast [-Wint-conversion]
    int  u     = *(p + 3);       /* 3 */    //能        //*(p+3) 本来就是 int，类型完全对得上，一点毛病没有
    printf("%d\n", *p(7));       /* 4 */    //不能      //error: called object 'p' is not a function or function pointer
    int *q = a + 7;
    printf("%d\n", q - p);       /* 5 */    //能        //结果类型是 ptrdiff_t（long long），%d 配错了只出 -Wformat 警告，不拦编译
    return 0;
}