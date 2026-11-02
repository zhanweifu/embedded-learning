#include<stdio.h>
int main(void){
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a + 2;
    printf("%d\n",sizeof(a));       //20
    printf("%d\n",sizeof(a[0]));    //4
    printf("%d\n",sizeof(p));       //8
    printf("%d\n",sizeof(*p));      //4
    printf("%d\n",sizeof(int));     //4
    printf("%d\n",p-a);             //4----2
    printf("%u\n",(char *)p - (char *)a);       //4----8
    return 0;
}