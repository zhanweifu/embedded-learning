#include<stdio.h>
#include<stdlib.h>
typedef struct {
    unsigned char buf[8]; 
    int head, tail;
    int size;
} ringbuf_t;
void rb_init(ringbuf_t *rb){
    if(rb==NULL)
        return;
    rb->head =0;
    rb->size =8;
    rb->tail =0;
}
int rb_is_empty(ringbuf_t *rb){
    if(rb==NULL) return 0;
    if(rb->head == rb->tail) return 1;
    else return 0;
}
int rb_is_full(ringbuf_t *rb){
    if(rb==NULL) return 0;
    if ((rb->head + 1) % rb->size == rb->tail) return 1;
    else return 0;
}
int rb_put(ringbuf_t *rb, unsigned char data){
    if(rb==NULL) return 0;
    if(rb_is_full(rb)) return 0;
    else{
        rb->buf[rb->head] = data;
        rb->head = (rb->head + 1) % rb->size;
        return 1;
    }
}
int rb_get(ringbuf_t *rb, unsigned char *out){
    if(rb==NULL || out == NULL) return 0;
    if(rb->head == rb->tail) return 0;
    else{
        *out = rb->buf[rb->tail];
         rb->tail = (rb->tail + 1) % rb->size;
         return 1;
    }
}
int main(void){
    system("chcp 65001");
    ringbuf_t h001;
    unsigned char ch;
    rb_init(&h001);
    printf("%d\n%d\n",h001.head,h001.size);
    int q,w,e;
    q=(rb_put(&h001,1));
    w=(rb_put(&h001,2));
    e=(rb_put(&h001,3));
    printf("put 1 -> %d\n", q);
    printf("put 2 -> %d\n", w);
    printf("put 3 -> %d\n", e);
    printf("empty?\n");
    if(rb_is_empty(&h001)==1)printf("empty\n");
    printf("full?\n");
    if(rb_is_full(&h001)==1)printf("full\n");
    for(int n=0;n<4;n++){
        if (rb_get(&h001, &ch)) printf("取到 %d\n", ch);
        else printf("空了\n");
    }
    return 0;
}