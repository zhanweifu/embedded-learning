#include<stdio.h>
enum{wait,close,compute};
int main(void){
    int state=compute;
    float a,c,f;
    char s,b,d;
    while((s=getchar())!='q'){
        if(s=='r'){
            switch(state){
                case wait:      state=compute;break;
                case compute:   state=close;printf("run\n");
                                    while((d=getchar())!='q'){
                                        scanf("%f %c %f",&a,&b,&c);
                                        if(b==43) printf("%f\n",f=a+c);
                                        if(b==45) printf("%f\n",f=a-c);
                                        if(b==42) printf("%f\n",f=a*c);
                                        if(b==47&&c!=0) printf("%f\n",f=a/c);
                                        a=0;b=0;c=0;}break;
                case close:     state=wait;break;
            }
        }
    }return 0;
}