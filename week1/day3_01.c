#include<stdio.h>
#include<stdlib.h>
enum state{on,off,shine};
int main(void){
    system("chcp 65001");
    int state = off;
    char s;
    while((s=getchar())!='q'){
        if(s=='p'){
            switch (state){
            case on: printf("开灯\n");state=off;break;
            case off: printf("关灯\n");state=shine;break;
            case shine: printf("闪烁\n");state=on;break;
            }
        }
    }
    return 0;
}