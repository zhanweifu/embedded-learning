#include<stdio.h>
void swap_good(int *a,int *b){   //1表示真，0表示假
    int c=*a;
    *a=*b;
    *b=c;
}
void swap_bad(int a,int b){
    int c=a;
    a=b;
    b=c;
}
int main(void){
    int q=50,e=100;
    swap_bad(q,e);
    printf("%d\n%d\n",q,e);
    swap_good(&q,&e);
    printf("%d\n%d\n",q,e);
    return 0;
}