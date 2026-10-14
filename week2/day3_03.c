#include <stdio.h>
int main(void){
int a[10] = {1,2,3,4,5,6,7,8,9,10};
int i, f;
f=0;
scanf("%d", &i);
for (int n = 9; n >= 0; n--)
    if (i == a[n]) printf("%d",n), f = 1;
if (f == 0) printf("-1");
return 0;
}

