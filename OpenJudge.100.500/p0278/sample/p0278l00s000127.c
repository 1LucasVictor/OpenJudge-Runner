#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


// I/O
void put_int(int n) {
    if(!n) {
        putchar_unlocked('0');
        return;
    }
    if(n < 0) n = -n, putchar_unlocked('-');
    char buf[11];
    int i = 0;
    while(n) buf[i++] = (char)(n % 10 + '0'), n /= 10;
    while(i--)putchar_unlocked(buf[i]);
}
int get_uint() {
    int n = 0;
    int c = getchar_unlocked();
    if(c < 48 || 57 < c) return c;
    while(47 < c && c < 58) n = 10 * n + (c & 0xf), c = getchar_unlocked();
    return n;
}
//


// Util
#define container_of(ptr, type, member) ({  \
    void *__mptr = (void *)(ptr);           \
    ((type *)(__mptr - offsetof(type, member))); })
//


// List
struct list_head {
    struct list_head *next, *prev;
};

static inline void INIT_LIST_HEAD(struct list_head *list) {
    list->next = list;
    list->prev = list;
}

static inline void __list_add(struct list_head *new, struct list_head *prev, struct list_head *next) {
    next->prev = new;
    new->next = next;
    new->prev = prev;
    prev->next = new;
}

static inline void list_add(struct list_head *new, struct list_head *head) {
    __list_add(new, head, head->next);
}

static inline void list_add_tail(struct list_head *new, struct list_head *head) {
    __list_add(new, head->prev, head);
}

static inline void __list_del(struct list_head *prev, struct list_head *next) {
    next->prev = prev;
    prev->next = next;
}

static inline void __list_del_entry(struct list_head *entry) {
    __list_del(entry->prev, entry->next);
}

static inline void list_del(struct list_head *entry) {
    __list_del_entry(entry);
    entry->next = NULL;
    entry->prev = NULL;
}

static inline int list_empty(const struct list_head *head) {
    return head->next == head;
}

#define list_entry(ptr, type, member) container_of(ptr, type, member)
#define list_first_entry(ptr, type, member) list_entry((ptr)->next, type, member)
//


// my node
struct my_node {
    int num;
    struct list_head list;
};
//


// Solve
void bfs(int G[100][100], const int N, int d[100]) {
    struct list_head head;
    INIT_LIST_HEAD(&head);

    struct my_node *data = malloc(sizeof(struct my_node));
    data->num = 0;
    list_add_tail(&data->list, &head);
    int u;
    while(!list_empty(&head)) {
        data = list_first_entry(&head, struct my_node, list);
        u = data->num;
        list_del(&data->list);
        free(data);
        for(int i = 0; i < N; ++i) {
            if(!G[u][i] || d[i] != 1 << 28) continue;
            d[i] = d[u] + 1;
            data = malloc(sizeof(struct my_node));
            data->num = i;
            list_add_tail(&data->list, &head);
        }
    }
}

int main(int argc, char **argv) {
    int n = get_uint();
    int G[100][100] = {};
    for(int i = 0; i < n; ++i) {
        int u = get_uint() - 1;
        int k = get_uint();
        for(int j = 0; j < k; ++j) G[u][get_uint() - 1] = 1;
    }
    int d[100] = {0};
    for(int i = 1; i < 100; ++i) d[i] = 1 << 28;
    bfs(G, n, d);
    for(int i = 0; i < n; ++i) {
        put_int(i + 1);
        putchar_unlocked(' ');
        put_int(d[i] == 1 << 28 ? -1 : d[i]);
        putchar_unlocked('\n');
    }
    return 0;
}

