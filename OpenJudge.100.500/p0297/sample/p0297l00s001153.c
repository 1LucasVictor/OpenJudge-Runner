#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
void put_uint(int n) {
    if(!n) {
        putchar_unlocked('0');
        return;
    }
    char buf[11];
    int i = 0;
    while(n) buf[i++] = (char)(n % 10 + '0'), n /= 10;
    while(i--)putchar_unlocked(buf[i]);
}
int get_uint() {
    int n = 0;
    int c = getchar_unlocked();
    if(c < 48 || 57 < c) return c;
    while(47 < c && c < 58) {
        n = 10 * n + (c & 0xf);
        c = getchar_unlocked();
    }
    return n;
}
int get_str(char *str) {
    int c;
    while((c = getchar_unlocked()) > 32) *str++ = (char)c;
    *str = 0;
    return c;
}

#define MIN(x, y) ((x) <= (y) ? (x) : (y))
typedef struct QueueKey {
    char str[16];
    int num;
} QueueKey;
typedef struct QueueDat {
    QueueKey key;
    struct QueueDat *next;
} QueueDat;
typedef struct Queue {
    size_t len;
    QueueDat *head;
    QueueDat *tail;
} Queue;
#define queue_init(q) ((q) ? ((q)->len = 0, (q)->head = (q)->tail = NULL) : 0)
#define queue_len(q) ((q) ? (q)->len : 0)
void queue_push(Queue *q, QueueKey x) {
    QueueDat *new_dat = malloc(sizeof(QueueDat));
    *new_dat = (QueueDat){x, NULL};
    if(q->len) {
        q->tail->next = new_dat;
        q->tail = new_dat;
    }else{
        q->head = q->tail = new_dat;
    }
    q->len++;
}
QueueKey queue_pop(Queue *q) {
    assert(q->len);
    QueueDat *old_head = q->head;
    q->head = old_head->next;
    QueueKey key = old_head->key;
    free(old_head);
    q->len--;
    return key;
}

int main(int argc, char **argv) {
    int n = get_uint();
    int q = get_uint();
    Queue Q;
    queue_init(&Q);
    QueueKey key;
    for(int i = 0; i < n; ++i) {
        get_str(key.str);
        key.num = get_uint();
        queue_push(&Q, key);
    }
    int cnt = 0;
    while(queue_len(&Q)){
        key = queue_pop(&Q);
        cnt += MIN(key.num, q);
        if(key.num > q){
            key.num -= q;
            queue_push(&Q, key);
        } else {
            printf("%s %d\n", key.str, cnt);
        }
    }
    return 0;
}


