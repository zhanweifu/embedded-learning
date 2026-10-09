#include<stdio.h>
int main(void){
    int a[10][10]={0};
    int x,y;
    a[0][0]=1;
    for(y=0;y<10;y++){
        a[y][0]=1;
        a[y][y]=1;
        for(x=1;x<y;x++)
            a[y][x]=a[y-1][x-1]+a[y-1][x];
    }
    for(y=0;y<10;y++){
        for(x=0;x<=y;x++)
            printf("%d",a[y][x]);
        printf("\n");
    }
    return 0;
}