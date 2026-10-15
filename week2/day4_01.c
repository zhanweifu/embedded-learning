#include<stdio.h>
int main(void){
int a[3][4]={{1,2,3,4},{2,2,3,4},{3,2,3,4}};
int n=sizeof(a)/sizeof(a[0]);
int w=sizeof (a[0])/sizeof (a[0][0]);
for (int h=0;h<n;h++){
for(int l=0;l<w;l++){
printf ("%d ",a[h][l]);}
printf ("\n");}
return 0;}