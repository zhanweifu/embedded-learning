#include<stdio.h>
int main(void){
    int a[3][4]={{1,56,3,4},{2,24,3,4},{96,2,3,4}};
    int max=0;
    int n=sizeof(a)/sizeof(a[0]);
    int w=sizeof (a[0])/sizeof (a[0][0]);
    for(int i=0;i<n;i++){
        for (int q=0;q<w;q++){
            if (a[i][q]>max) max=a[i][q];} printf ("%d\n",max);
        max=0;
    }
    return 0;
}