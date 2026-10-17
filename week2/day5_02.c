#include<stdio.h>
typedef struct{
    int head,tail,size;
}ringbuf_t;
void rb_init(ringbuf_t *rb){
    if(rb==NULL)
        return;
    rb->head =0;
    rb->size =8;
    rb->tail =0;
}
int main(void){
    ringbuf_t zzz;
    rb_init(&zzz);
    printf("%d\n%d\n%d\n",zzz.head,zzz.size,zzz.tail);
    return 0;
}