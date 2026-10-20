#include<stdio.h>
void minmax(const int a[],int len,int *min,int *max){
    for(int i=0;i<len;i++){
        if(*max<a[i]) *max=a[i];
        if(*min>a[i]) *min=a[i];
    }
    return;
}
int main(void){
    int qp[]={1,4,3,2,12,23,45,567,234,54,123,56};
    int h=sizeof(qp)/sizeof(qp[0]);
    int x=qp[0];
    int d=qp[0];
    minmax(qp,h,&x,&d);
    printf("%d\n%d\n",x,d);
    return 0;
}