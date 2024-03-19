#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))

typedef struct {
    char name[10];
    int time;
} Process;

typedef struct {
    Process *que;
    int front;
    int rear;
    int size;
    int num;
} Que;

bool initQue(Que *q, int size) {
    if((q->que = malloc(size * sizeof(Process))) == NULL) {
        return false;
    }

    q->front = q->rear = q->num = 0;
    q->size = size;
    return true;
}

bool isEmptyQue(Que *q) {
    return q->num <= 0;
}

bool isFullQue(Que *q) {
    return q->num >= q->size;
}

int nextPtr(int ptr, int size) {
    return (ptr + 1) % size;
}

bool enQue(Que *q, Process *p) {
    if(isFullQue(q)) {
        return false;
    }

    q->que[q->rear] = *p;
    q->rear = nextPtr(q->rear, q->size);
    q->num++;

    return true;
}

bool deQue(Que *q, Process *p) {
    if(isEmptyQue(q)) {
        return false;
    }

    *p = q->que[q->front];
    q->front = nextPtr(q->front, q->size);
    q->num--;

    return true;
}

void terminateQue(Que *q) {
    free(q->que);
    q->front = q->rear = q->num = q->size = 0;
}

int main(void) {
    Que que;
    char buf[32];
    int n;
    int q;

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d %d", &n, &q);

    initQue(&que, n);

    Process pBuf;
    for(int i = 0; i < n; i++) {
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%s %d", pBuf.name, &pBuf.time);
        enQue(&que, &pBuf);
    }
    
    int elapsedTime = 0;
    while(!isEmptyQue(&que)) {
        deQue(&que, &pBuf);
        int time = MIN(pBuf.time, q);
        elapsedTime += time;
        pBuf.time -= time;
        if(pBuf.time > 0) {
            enQue(&que, &pBuf);
        } else {
            printf("%s %d\n", pBuf.name, elapsedTime);
        }
    }

    terminateQue(&que);
    return 0;
}
