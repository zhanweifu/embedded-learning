#include<stdio.h>
typedef struct{
    int z;
    char date[20];
}ringbuf_t;
int rb_put(ringbuf_t *rb, unsigned char data){
    if((rb->date)==20) return 0;
}
int main(void){
    
}