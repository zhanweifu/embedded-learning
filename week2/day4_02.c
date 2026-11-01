#include<stdio.h>
int main(void){
    int b[2][2]={{-5,-3},{-9,-1}};
    int max=b[0][0];
    int n=sizeof(b)/sizeof(b[0]);
    int w=sizeof (b[0])/sizeof (b[0][0]);
    for(int i=0;i<n;i++){
        for (int q=0;q<w;q++){
            if (b[i][q]>max) max=b[i][q];}

    }
    printf ("%d\n",max);
    return 0;
}