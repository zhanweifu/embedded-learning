#include  <stdio.h>
#include <stdlib.h>
int main(void){
    system("chcp 65001");
    int a,c;
    float b;
    a=7;
    b=7.0;
    c=2;
    printf("7/2的商是%d\n",a/c);
    printf("7.0/2的商是%f\n",b/c);
    return 0;
}
