#include<stdio.h>
int main(void){
    int x,a,b,c;
    for(x=99;x<=999;x++){
        a=x%10;
        b=(x/10)%10;
        c=x/100;
        if ((a*a*a+b*b*b+c*c*c)==x) printf("%d\n",x);
    }
    return 0;
}