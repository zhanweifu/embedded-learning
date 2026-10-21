#include<stdio.h>
int main(void){
    int a[]={23,45,78};
    int q=0,w=0;
    printf("%p\n", (void *)&a[0]);
    printf("%p\n", (void *)&a[1]);
    printf("%p\n", (void *)&a[2]);
    q= (char*)&a[2]-(char*)&a[1];
    w= (char*)&a[1]-(char*)&a[0];
    if(w==q)printf("same\n");
    if(w==sizeof(int))printf("yes");
    return 0;
}