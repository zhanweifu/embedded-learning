#include<stdio.h>
int main(void){
    int x,i;
    i=0;
    scanf("%d",&x);
    while(x!=0){
        x&=(x-1);
        i++;
    }
    printf("%d",i);
    return 0;
}