#include<stdio.h>
#include<stdlib.h>
unsigned char led=0;
void led_on (int n){
    led |=(1<<n);
}
void led_off (int n){
    led &=~(1<<n);
}
void led_toggle(int n){
    led ^=(1<<n);
}
int led_query(int n){
    return(led>>n)&1;
}
int main(void){
    system("chcp 65001");
    led_on(3);
    led_off(5);
    led_toggle(4);
    printf("第3个灯:%d\n", led_query(3));
    for (int n = 7; n >= 0; n--) {
       printf("%d", (led >> n) & 1);
   }
   printf("\n");
    return 0;
}