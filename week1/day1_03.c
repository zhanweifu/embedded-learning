#include<stdio.h>
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    int a,c=0,b=2;
    scanf("%d",&a);
    while(b<=(a/2)){
    if (a%b==0){
        c=1;
        break;}
    b++;
    }
    if(c==1) printf("%d不是素数",a);
    else printf("%d是素数",a);
    return 0;
}