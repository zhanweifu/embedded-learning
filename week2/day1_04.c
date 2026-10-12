#include<stdio.h>
void print_bin(unsigned char x){
    int b;
    for(b=7;b>=0;b--)
        printf("%d",(x>>b)&1);
    printf("\n");
}
int main(void){
    unsigned char q;
    scanf("%c",&q);
    print_bin(q);
    return 0;
}