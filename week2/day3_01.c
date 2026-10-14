#include <stdio.h>
int main(void){
int a[8]={3,1,4,1,5,9,2,6};
float ave;
int sum, max, min;
sum=0;
max=a[0];
min=a[0];
ave=0;
for (int i=0; i<=7; i++){
    sum+=a[i];
    if(a[i]>max) max=a[i];
    if(a[i]<min) min=a[i];}
ave=(sum/(sizeof(a)/sizeof(a[0])));
printf("%d\n%d\n%d\n%f\n", sum, max, min,ave);
return 0;
}
