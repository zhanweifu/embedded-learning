#include<stdio.h>
#include<stdlib.h>
int my_strcmp(const char *a, const char *b){
    while(*a&& *a==*b){
        a++;
        b++;
    }
    return *a-*b;
}
static void check(const char *a, const char *b) {
    int r = my_strcmp(a, b);
    printf("\"%s\" vs \"%s\" → %d  (%s)\n", a, b, r,
    r < 0 ? "a<b" : (r == 0 ? "相等" : "a>b"));
}
int main(void) {
    system("chcp 65001");
    check("abc", "abd");
    check("abc", "abc");
    check("ab",  "abc");
    return 0;
}