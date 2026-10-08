#include<stdio.h>
enum{wait,close,compute};
int main(void){
    int state=wait;
    float a,c,f;
    char s,b;
    while((s=getchar())!='q'){
        if(s='r'){
            switch(state){
                case wait:state=compute;break;
                case compute:   state=close;printf("run\n");
                                scanf("%f %c %f",&a,&b,&c);
                                if(b==43) printf("%f\n",f=a+c);break;
                                if(b==45) printf("%f\n",f=a-c);break;
                                if(b==42) printf("%f\n",f=a*c);break;
                                if(b==47) printf("%f\n",f=a/c);break;
                case close:state=wait;break;
            }
        }
    }return 0;
}