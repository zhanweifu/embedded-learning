#include<stdio.h>
int my_strlen(const char*s){
    int n=0;
    while(*s!='\0'){
        s++;
        n++;
    }
    return(n);
}
int is_hui(const char*s){
    int i=0;
    int j=my_strlen(s)-1;
    while(i<j){
        if(s[i]!=s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
int main(void){
    char c[99];
    scanf("%98s",c);
    printf("%d",is_hui(c));
    return 0;
}