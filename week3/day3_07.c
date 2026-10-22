//**预期：段错误 exit 139**//
#include<stdio.h>
int main(void){
    char *p = "hello";
    p[0] = 'H'; 
    return 0;
}