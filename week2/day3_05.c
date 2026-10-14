#include <stdio.h>
int count_even(int a[]) {
    int n = sizeof(a);
    int len = 0;
    for(n=9;n>=0;n--)
        if((a[n]&1)==0) len++;
    return (len); }
int main(void) {
    int x[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n", count_even(x));
return 0; }