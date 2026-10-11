#include<stdio.h>
enum{wait,close,compute};
int main(void){
    int state=compute;
    float a,c,n;
    char s,b;
    while((s=getchar())!='q'){
        if(s=='r'){
            switch(state){
                case wait:      state=compute;break;
                case compute:   state=close;printf("run\n");
                                        while((n=scanf("%f %c %f",&a,&b,&c))==3){
                                        if(b==43) printf("%f\n",a+c);
                                        if(b==45) printf("%f\n",a-c);
                                        if(b==42) printf("%f\n",a*c);
                                        if(b==47&&c!=0) printf("%f\n",a/c);}break;
                case close:     state=wait;break;
            }
        }
    }return 0;
}