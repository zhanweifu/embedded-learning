#include<stdio.h>
#include<stdlib.h>
size_t my_strlen_p(const char *s){
    const char *p = s;
    while (*p){
        p++;
    }
    return (p-s);
}
int my_is_palindrome(const char*s){
    if (s == NULL) return 0;          // 防御，本周规矩
    size_t len = my_strlen_p(s);      // 把 Day4_01 那个指针版拷过来用
    if (len<2) return 1;         // 什么情况下不用比？（最少几个字符就没得比）
    const char *l = s;
    const char *r = s + len - 1;      // 最后一个字符的下标是 len-1
    while (l<r) {              // 什么时候还能继续比？
        if (*l != *r) return 0;       // 一发现不配对，立刻否定
        l++;
        r--;
    }
    return 1;
}
static void check(const char *s) {
    printf("\"%s\" → %s\n", s, my_is_palindrome(s) ? "是回文" : "不是");
}
int main(void) {
    system("chcp 65001");
    check("level");
    check("abba");
    check("hello");
    check("abcd");
    check("a");
    check("");
    check("ab");
    check("aa");
    return 0;
}