#include<stdio.h>
void bubblesort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
int main(void){
    int a[]={1,5,9,8,15,46,59,4,5,6,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    bubblesort(a,n);
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
    }
}