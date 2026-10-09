#include<stdio.h>
enum{green,yellow_green,yellow_red,red};
int main(void){
    int state=green;
    char a;
    while((a=getchar())!='q'){
        if(a=='r'){
            switch(state){
                case green:state=yellow_red;printf("yellow\n");break;
                case yellow_green:state=green;printf("green\n");break;
                case yellow_red:state=red;printf("red\n");break;
                case red:state=yellow_green;printf("yellow\n");break;
            }
        }
    }return 0;
}

