#include <stdio.h>
int main(void){
int a[]={1,2,3,4,5,6,7,8,9,10};
int n=sizeof(a)/sizeof(a[0]);
for(n=n-1;n>=0;n--)
    printf("%d\n",a[n]);
return 0;}