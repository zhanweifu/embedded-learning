#include<stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d",&d);
    for(a=1;a<=d;){
        for(b=1;b<=d-a;b++)
        printf(" ");
        for(c=1;c<=2*a-1;c++)
        printf("*");
    printf("\n"),a++;
    }
    for(a=d;a>=1;){
        for(b=1;b<=d-a;b++)
        printf(" ");
        for(c=1;c<=2*a-1;c++)
        printf("*");
    printf("\n"),a--;
    }
    return 0;
}