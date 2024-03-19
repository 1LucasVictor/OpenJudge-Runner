#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 1000

typedef struct h{
    char data[10];
struct h *next;
}H;

H table[N];

void init() {
    int i;

    for (i = 0; i < N; i++) {
        table[i].next = NULL;
        *table[i].data = NULL;
    }
}

int hash(char *x) {
    int sum = 0;
    while (*x)
        sum += *x++;
    return sum%N;
}

int find(char *x) {
    H *p;
    int h;

    h = hash(x);
    for (p = table[h].next; p != NULL; p = p->next)
        if (strcmp(p->data,x) == 0)
            return 1;

    return 0;
}

void insert(char *x) {
    H *p;
    H *New;
    int h;

    if (find(x))
        return;

    if ((New = (H *)malloc(sizeof(H))) == NULL)
        exit(1);

    h = hash(x);
    strcpy(New->data, x);
    p = table[h].next;
    table[h].next = New;
    New->next == p;
}

/*void Delete(char *x) {
    H *p;
    H *q;
    int h;

    h = hash(x);

    for (p = table[h].next, q = &table[h]; p != NULL; q = p, p = p->next)
        if (strcmp(p->data, x) == 0) {
            q->next = p->next;
            break;
        }

    if (p != NULL)
        free(p);
}*/

int main(void) {
    int i, j, n;
    char com[10], data[10];

    init();

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %s", com, data);

        if (com[0] == 'i')
            insert(data);
        else if (com[0] == 'f') 
            if (find(data))
                printf("yes\n");
            else
                printf("no\n");
        /*else
            Delete(data);*/
    }
    


    return 0;
}