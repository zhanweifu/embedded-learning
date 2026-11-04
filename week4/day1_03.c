#include<stdio.h>
void minmax(int *a, int n, int *mx, int *mn){
    *mn=a[0];
    *mx=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>*mx) *mx=a[i];
        if(a[i]<*mn) *mn=a[i];
    }
}
int main(void){
    int arr[5]={52,65,48,5,32};
    int mx = 0, mn = 0; minmax(arr, 5, &mx, &mn);
    printf("%d %d\n",mx,mn);
    return 0;
}