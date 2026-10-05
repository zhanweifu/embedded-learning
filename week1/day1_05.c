#include<stdio.h>
int main(void){
    int a,c,b=0,sum;
    scanf("%d",&a);
    while(a!=0){
        sum=sum+a;
        b++;
        c=sum/b;
        scanf("%d",&a);
    }
    printf("%d %d",c,sum);
    return 0;
}