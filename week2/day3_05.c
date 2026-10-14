#include <stdio.h>
int count_even(int a[],int len) {
    int n=0;
    for(int i=0;i<len;i++)
        if((a[i]&1)==0) n++;
    return (n); }
int main(void) {
    int x[] = {1,2,3,4,5,6,7,8,9,10};
    int z=sizeof(x)/sizeof(x[0]);
    printf("%d\n", count_even(x,z));
    return 0; 
}