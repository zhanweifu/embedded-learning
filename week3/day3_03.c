#include<stdio.h>
int main(void){
    int a[]={23,56,87,45,258};
    int n = &a[4] - &a[1];
    printf("%d\n",n);
    if(n==3)printf("right");
    return 0;
}