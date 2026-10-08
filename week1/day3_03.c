#include<stdio.h>
enum{green,yellow_green,yellow_red,red};
int main(void){
    int state=green;
    char a;
    while((a=getchar())!='q'){
        if(a=='r'){
            switch(state){
                case green:state=yellow_red;break;
                case yellow_green:state=green;break;
                case yellow_red:state=red;break;
                case red:state=yellow_green;break;
            }
        }
    }return 0;
}

