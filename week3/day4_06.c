#include<stdio.h>
int my_is_palindrome(const char* s){
    int len=0;
    const char *l=s;
    while(s[len]!='\0'){
        len++;
    }
    const char *r=s+len-1;
    if (len < 2) return 1;
    while (l < r){
    if(*l!=*r) return 0;
    l++;
    r--;
    }
    return 1;
}
int main(void){
    printf("%d\n",my_is_palindrome("a"));
    printf("%d\n",my_is_palindrome(""));
    printf("%d\n",my_is_palindrome("ab"));
    printf("%d\n",my_is_palindrome("aa"));
    printf("%d\n",my_is_palindrome("aba"));
    printf("%d\n",my_is_palindrome("abba"));
    printf("%d\n",my_is_palindrome("abcba"));
    printf("%d\n",my_is_palindrome("abca"));
    return 0;
}
