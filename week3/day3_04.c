#include<stdio.h>
void swap(int *a,int len){
    int *q=a;
    int *p=a+len-1;
    while(q < p){
        int k=*q;
        *q=*p;
        *p=k;
        q++;
        p--;
    }
}
int main(void){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(a)/sizeof(a[0]);
    swap(&a[0],len);
    for(int i=0;i<len;i++) printf("%d\n",a[i]);
    return 0;
}