#include <stdio.h>
#include <stdlib.h>

#define N 100000

typedef struct process {
   char name[5];
   int time;
} Process;

typedef struct queue {
  int head;
  int tail;
  Process data[N];
} Queue;

void initialize(Queue*);
void enqueue(Queue*, Process);
Process dequeue(Queue*);
int is_empty(Queue*);

int main(){
    int n, q, current, time, i;
    char name[5];
    Queue *queue = malloc(sizeof(struct queue));

    initialize(queue);

    scanf("%d %d", &n, &q);

    for(i=0; i<n; i++){
        Process p;
        scanf("%s %d", p.name, &p.time);
        enqueue(queue, p);
    }

    current = 0;
    while(!is_empty(queue)){
        Process p = dequeue(queue);
        if(p.time <= q){
            current += p.time;
            printf("%s %d\n", p.name, current);
        }else{
            current += q;
            p.time -= q;
            enqueue(queue, p);
        }
    }

    free(queue);

    return 0;
}

void initialize(Queue *queue){
    queue->head = 0;
    queue->tail = 0;
}

void enqueue(Queue* queue, Process process){
    queue->data[queue->tail++] = process;
}

Process dequeue(Queue* queue){
    return queue->data[queue->head++];
}

int is_empty(Queue *queue){
    return queue->head == queue->tail;
}