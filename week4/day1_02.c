#include<stdio.h>
int main(void){
    int a[10] = {0};
    int *p = a;
    char res   = *p;             /* 1 */    //不能
    int  t     = (p + 3);        /* 2 */    //不能
    int  u     = *(p + 3);       /* 3 */    //不能
    printf("%d\n", *p(7));       /* 4 */    //不能
    int *q = a + 7;
    printf("%d\n", q - p);       /* 5 */    //不能
}