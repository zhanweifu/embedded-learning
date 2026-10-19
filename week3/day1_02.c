#include<stdio.h>
void show(const char *tag, int *p){
    printf("%s\n",tag);
    printf("%p\n",(void*)p);
    if(p==NULL){
        printf("empty zhizhen,xixi");
        return;
    }
    else printf("%d\n",*p);
}
int main(void){
    int x=42;
    show("x",&x);
    int *p = NULL;  //似乎是崩溃了
    if (p) *p = 5;
    show("null",NULL);
    printf("%zu %zu %zu\n", sizeof(int*), sizeof(char*), sizeof(int));
    printf("%d\n", p);   //这是故意练 warning 的
    return 0;
}