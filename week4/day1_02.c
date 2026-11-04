#include<stdio.h>
int main(void){
    int a[10] = {0};
    int *p = a;
    char res   = *p;             /* 1 */    //能
    int  t     = (p + 3);        /* 2 */    //不能      //warning: initialization of 'int' from 'int *' makes integer from pointer without a cast [-Wint-conversion]
    int  u     = *(p + 3);       /* 3 */    //能
    printf("%d\n", *p(7));       /* 4 */    //不能      //error: called object 'p' is not a function or function pointer
    int *q = a + 7;
    printf("%d\n", q - p);       /* 5 */    //能
    return 0;
}