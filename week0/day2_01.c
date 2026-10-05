#include  <stdio.h>
#include <stdlib.h>
int main(void){
    system("chcp 65001");
    int a,c;
    scanf("%d %d",&a,&c);
    printf("他们的和是%d\n",a+c);
    printf("他们的积是%d\n",a*c);
    printf("他们的余数是%d\n",a%c);
    printf("他们的差是%d\n",a-c);
    printf("他们的商是%d\n",a/c);
    return 0;
}