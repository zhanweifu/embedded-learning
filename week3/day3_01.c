#include<stdio.h>
int main(void){
    int a[]={2,98,567,67,54};
    int len,i=0;
    int *p=&a[0];
    len=sizeof(a)/sizeof(a[0]);
    for(;i<len;i++){
        printf("%d\n",a[i]);
        printf("%d\n",*(a+i));
        printf("%d\n",*p++);
    }
    printf("p - a = %d\n", (int)(p - a));
    return 0;
}