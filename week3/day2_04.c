#include<stdio.h>
void bump(int *n){
    *n=*n+1;
    return ;
}
int main(void){
    int a=5;
    for(int q=0;q<5;q++){
    bump(&a);}
    printf("%d\n",a);
    return 0;
}