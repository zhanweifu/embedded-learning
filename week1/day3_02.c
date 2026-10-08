#include<stdio.h>
enum{blank,press_,press,blank_};
int main(void){
    int state =blank;
    int a;
    while((a=getchar())!='q'){
        if(a=='0'){
            switch(state){
                case blank:state=press_;break;
                case press_:printf("on\n");state=press;break;
                case press:break;
            }
        }else if(a=='1'){
            switch(state){
                case blank:break;
                case press_:state=blank;break;
                case press:state=blank_;break;
                case blank_:state=blank;break;
            }
        }
    }return 0;
}
