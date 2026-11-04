#include<stdio.h>
void set_flag(const char **slot, const char *v){
    *slot=v;
}
int main(void){
    const char *names[] = {"led", "uart", "i2c"};
    const char **p = names;
    for(int i=0;i<3;i++){
        printf("%s\n",*p);
        p++;
    }
    const char *cur = "idle"; set_flag(&cur, "busy");
    printf("%s\n",cur);
    int *arr_of_ptr[3];
    int (*ptr_to_arr)[3];
    printf("%I64u\n",sizeof(arr_of_ptr));      //3个指针大小
    printf("%I64u\n",sizeof(ptr_to_arr));      //一个指针的大小
    return 0;
}