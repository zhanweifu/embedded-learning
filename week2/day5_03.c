#include<stdio.h>
typedef struct {
    int size;
    char z[10];
    }ringbuf_t;
int rb_is_empty(ringbuf_t *rb){
    if(rb==NULL) return -1;
    if(rb->size==0) return 1;
    else return 0;
}
int rb_is_full(ringbuf_t *rb){
    if(rb==NULL) return -1;
    if(rb->size==(sizeof(rb->z))) return 1;
    else return 0;
}
int main(void){
    ringbuf_t hd15;
    scanf("%d",&hd15.size);
    if((rb_is_empty(&hd15))==1) printf("empty");
    else if(rb_is_full(&hd15)==1) printf("full");
    else printf("free");
    return 0;
}