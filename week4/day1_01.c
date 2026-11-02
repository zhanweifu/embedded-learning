#include<stdio.h>
void minmax_bad (int a, int b, int mx,  int mn ){      //a,b为入口，mx，mn为出口。
    if(a>b) mx=a,mn=b;
    else mx=b,mn=a;
}
void minmax_good(int a, int b, int *mx, int *mn){      //a,b为入口，*mx，*mn为出口。
    if(a>b) *mx=a,*mn=b;
    else *mx=b,*mn=a;
}
int main(void){
    int x=3, y=9, big=0, small=0;
    minmax_bad(x,y,big,small);
    printf("%d %d\n",big,small);
    minmax_good(x,y,&big,&small);
    printf("%d %d \n",big,small);
    return 0;
}