#include<stdio.h>
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    char x;
    float a,b,n;
    while(((n = scanf("%f %c %f", &a, &x,&b )) == 3)){
        if(x==43) printf("%f\n",a+b);
        if(x==45) printf("%f\n",a-b);
        if(x==42) printf("%f\n",a*b);
        if(x==47&&b!=0) printf("%f\n",a/b);
        if(x==47&&b==0) printf("除数不能为0\n");
    }
    return 0;
}