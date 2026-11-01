#include<stdio.h>
void bubble(int *a, int n){
    int j,i,temp;
    for(i=0;i<n-1;i++){
        int swapped=0;
        for(j=0;j<n-1;j++){
            if(*(a+j)>*(a+j+1)){
            temp=*(a+j);
            *(a+j)=*(a+j+1);
            *(a+j+1)=temp;
            swapped++;
            }
        }
        if(!swapped)break;
    }
}
int main(void){
    int a[50]={5,4,65,58,4,56,4,8};
    int cnt = 8;
    bubble(a,cnt);
    for (int i = 0; i < cnt; i++)
        printf("%d ", a[i]);
    putchar('\n');
    return 0;
}