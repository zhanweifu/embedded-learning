#include<stdio.h>
#include<stdlib.h>
typedef struct {
    unsigned char buf[8]; 
    int head, tail;
    int size;      /* 必须是 2 的幂：只有 2^n 时 & (size-1) 才等价于 % size */
} ringbuf_t;
void rb_init(ringbuf_t *rb){
    if(rb==NULL)
        return;
    rb->head =0;        /* rb->head 就是 (*rb).head，-> 只是语法糖 */
    rb->size =8;        /* 8 == 2^3，满足 & (size-1) 的前提 */
    (*rb).tail =0;      /* 换一种写法试编译，证明和 rb->tail 完全等价 */
    for(int i=0;i<rb->size;i++)
        rb->buf[i]=0;
}
void rb_dump(const ringbuf_t *rb){
    for (int i = rb->tail; i != rb->head; ){
        printf("%d\n",rb->buf[i]);
        i = (i + 1) & (rb->size - 1);
    }
}
void rb_dump_raw(const ringbuf_t *rb){
    const unsigned char *p = rb->buf;   /* 参数是 const，成员也是 const，p 必须是 const */
    for (int i = 0; i < rb->size; i++)
       printf("buf[%d] = %3u%s\n", i, p[i],
              i == rb->head ? "  <-head" : (i == rb->tail ? "  <-tail" : ""));
}
int rb_is_empty(ringbuf_t *rb){
    if(rb==NULL) return 0;
    if((*rb).head == rb->tail) return 1;
    else return 0;
}
int rb_is_full(ringbuf_t *rb){
    if(rb==NULL) return 0;
    /* 
     * 满判定：head 再走一格就会撞上 tail。
     * 注意 == 的优先级高于 &，所以必须给整个 & 表达式加括号！
     * 写成 (head+1) & (size-1) == tail 会被解析成
     *   (head+1) & ((size-1) == tail)   -> 掩码只剩 0/1，永远判不满
     */
    if ((((*rb).head + 1) & ((*rb).size - 1)) == (*rb).tail) return 1;
    else return 0;
}
int rb_put(ringbuf_t *rb, unsigned char data){
    if(rb==NULL) return 0;
    if(rb_is_full(rb)) return 0;
    else{
        (*rb).buf[(*rb).head] = data;
        (*rb).head = ((*rb).head + 1) & ((*rb).size -1);
        return 1;
    }
}
int rb_get(ringbuf_t *rb, unsigned char *out){
    if(rb==NULL || out == NULL) return 0;
    if((*rb).head == (*rb).tail) return 0;
    else{
        *out = (*rb).buf[(*rb).tail];
         (*rb).tail = ((*rb).tail + 1) & ((*rb).size -1);
         return 1;
    }
}
    int rb_count(ringbuf_t *rb){
    if(rb==NULL) return 0;
    int n=(((*rb).head-(*rb).tail+(*rb).size)&((*rb).size-1));
    return (n);
}
int main(void){
    system("chcp 65001");
    ringbuf_t h001;
    rb_init(&h001);
    for (int y = 0; y < 9; y++) {
        int ok = rb_put(&h001, (unsigned char)y);
        printf("put %d -> %s (count=%d)\n", y, ok ? "成功" : "满了被拒", rb_count(&h001));
    }
    unsigned char po = 0xAA;        /* 170，一个绝不会等于数据的值 */
    rb_init(&h001);
    if (rb_get(&h001, &po)) printf("竟然取到了？\n");
    else printf("空取被拒,po 还是 %d\n", po);   /* 应该是 170，不是垃圾值 */
    rb_put(&h001,1);
    rb_put(&h001,2);
    rb_put(&h001,3);
    unsigned char rt;
    for(int m=4;m<h001.size;m++){
        rb_put(&h001,m);
        if (rb_get(&h001, &rt)) printf("取出 %d\n", rt);
        else printf("空了\n");
    }
    printf("%d\n",rb_count(&h001));
    rb_dump(&h001);
    rb_dump_raw(&h001);

    /* ---- 测试4：绕圈（tail > head，数据跨过数组末尾）---- */
    printf("\n[测试4] 绕圈 dump\n");
    rb_init(&h001);
    for (int i = 1; i <= 7; i++) rb_put(&h001, (unsigned char)i);  /* 满：head=7, tail=0 */
    for (int i = 0; i < 7; i++) rb_get(&h001, &rt);                 /* 掏空：tail 走到 7 */
    rb_put(&h001, 8);   /* buf[7]=8，head 绕回 0 */
    rb_put(&h001, 9);   /* buf[0]=9，head=1 */
    printf("tail=%d head=%d count=%d（count 应为 2）\n",
           h001.tail, h001.head, rb_count(&h001));
    printf("按存放顺序 dump（应为 8 9）：\n");
    rb_dump(&h001);
    rb_dump_raw(&h001);
    return 0;
}