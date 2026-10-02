#include <stdio.h>
#include<stdlib.h>
int main(void){
    system("chcp 65001");
    printf("输入你的分数：\n");
    int score;
    scanf("%d",&score);
    switch(score/10){
        case 9: printf("%d A+",score);break;
        case 8: printf("%d B",score);break;
        case 7: printf("%d C",score);break;
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1: printf("%d 区",score);break;
        default:printf("error happen");
    }

}

