#include<stdio.h>
int main(void){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    (a>b)?(a>c)?printf("%f",a):printf("%f",c):(b>c)?printf("%f",b):printf("%f",c);
    return 0;
}