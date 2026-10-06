#include<stdio.h>
int main(void){
    int x,i;
    scanf("%d",&x);
    i=0;
    while(x!=0){
        x&=(x-1);
        i++;
    }
    printf("%d",i);
    return 0;
}