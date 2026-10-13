#include<stdio.h>
int counter(void){
    static int n = 0;
    return(++n);
}
int main(void){
    int a;
    for(int i=0;i<=5;i++){
    a=counter();
    printf("%d\n",a);}
    return 0;
}