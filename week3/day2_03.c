#include<stdio.h>
int divmod(int a,int b,int*rem){
    if(b!=0) {
        *rem=(a%b);
        return (a/b);
    }
    else return 0;
}
int main(void){
    int q,w,y,d;
    scanf("%d %d",&q,&w);
    y=0;
    d=divmod(q,w,&y);
    if(w!=0) printf("%d\n%d\n",d,y);
    else printf("warning");
    return 0;
}