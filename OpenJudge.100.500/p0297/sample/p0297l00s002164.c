#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct process proc;

struct process {
    char name[11];
    int t;
    proc *prev;
    proc *next;
};

void add(proc *p, char s[11], int t) {
    int i;
    proc *new;
    new = (proc*)malloc(sizeof(proc));
    strcpy(new->name, s);
    new->t = t;
    p->next = new;
    new->prev = p;
}

void rm(proc *p) {
    p->prev->next = p->next;
    p->next->prev = p->prev;
}

int main() {
    int n, q;
    char name[11];
    int t, cnt = 0;
    int i;

    scanf("%d %d", &n, &q);
    proc *head = (proc*)malloc(sizeof(proc));
    proc *tail = head;
    for(i = 0; i < n; i++) {
        scanf("%s %d", name, &t);
        add(tail, name, t);
        tail = tail->next;
    }
    head = head->next;
    tail->next = head;
    head->prev = tail;

    proc *p = head;
    while(1) {
        if (p->t <= q) {
            cnt += p->t;
            printf("%s %d\n", p->name, cnt);
            if (p->next == p) break;
            else rm(p);
        } else {
            p->t -= q;
            cnt += q;
        }
        p = p->next;
    }
    return 0;
}