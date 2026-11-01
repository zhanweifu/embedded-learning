#include<stdio.h>
int *find(int *a, int n, int key){
    if(a == NULL || n <= 0) return NULL;
    for(int i=0;i<n;i++){
        if(*(a+i)==key) return a+i;
    }
    return NULL;
}
int main(void){
    int a[50]={5,65,65,8,5,2,3,12,54,1,23};
    int ant=11;
    int key;
    scanf(" %d",&key);
    int *p = find(a, ant, key);
    if (p != NULL) {printf("%d %d\n",*p,(int)(p-a));}
    else    { printf("not found\n"); }
    return 0;
}