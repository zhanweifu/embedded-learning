#include<stdio.h>
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    char i,x;
    float a,b,c;
    while((i=getchar())!='q'){
        scanf("%f %c %f",&a,&x,&b);
        if(x==43) printf("%f\n",c=a+b);
        if(x==45) printf("%f\n",c=a-b);
        if(x==42) printf("%f\n",c=a*b);
        if(x==47,b!=0) printf("%f\n",c=a/b);
        if(x==47,b==0) printf("除数不能为0\n");
    }
}