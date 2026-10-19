#include<stdio.h>
void show(const char *tag, int *p){
    printf("%p\n",*tag);
    printf("%d\n",p);
    printf("%p\n",&p);
}
int main(void){
    char qwe;
    int x;
    show(&qwe,&x);
    int *p = NULL;  //似乎是崩溃了
    if (p) *p = 5;
    show(&qwe,p);
    printf("%zu %zu %zu\n", sizeof(int*), sizeof(char*), sizeof(int));
    printf("%d\n", p);   //??！没报错？！
    return 0;
}