#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[20];
    int exe_time;
    int fin_time;
}QueueData;

typedef struct _node
{
    QueueData data;
    struct _node *next;
}node;

typedef struct
{
    node *head, *tail;
}queue;

queue* init_queue()
{
    queue* qp = malloc(sizeof(queue));
    qp -> head = NULL;
    qp -> tail = NULL;
    return qp;
}

int empty(queue* q)
{
    return (q->head == NULL);
}

void enqueue(queue* q, QueueData d)
{
    node *np = malloc(sizeof(node));
    np->data = d;
    np->next = NULL;
    if(empty(q)){
        q -> head = np;
        q -> tail = np;
    }
    else{
        q -> tail -> next = np;
        q -> tail = np;
    }
}

QueueData dequeue(queue *q)
{
    if(empty(q)){
        printf("none\n");
        exit(1);
    }
    QueueData hold = q -> head -> data;
    node* temp = q -> head;
    q -> head = q -> head -> next;
    if(q->head == NULL) q->tail = NULL;
    free(temp);
    return hold;
}

int compare_find_time(const void* a, const void* b){
    QueueData *pa = (QueueData*) a;
    QueueData *pb = (QueueData*) b;

    return pa->fin_time - pb->fin_time;
}

int find_proc(char *s, QueueData *x, int total_proc){
    for(int i=0; i<total_proc; i++){
        if(strcmp(s,x[i].name)==0) return i;
    }
}

int main(){
    int proc_num, rr_time;
    queue *q = init_queue();
    scanf("%d %d", &proc_num, &rr_time);
    QueueData *proc = malloc(proc_num*sizeof(QueueData));
    for(int i=0; i<proc_num; i++){
        scanf("%s %d", proc[i].name, &proc[i].exe_time);
        enqueue(q, proc[i]);
    }

    
    int total_time = 0;
    while(q->head != NULL){
        if((q->head->data).exe_time > rr_time){
            (q->head->data).exe_time -= rr_time;
            total_time += rr_time;
            //enqueue
            enqueue(q, q->head->data);
            //pop from queue
            node *temp_x = q->head;
            q -> head = q->head->next;
            free(temp_x);
        }
        else if
            ((q->head->data).exe_time>0&&(q->head->data).exe_time<=rr_time){
            total_time += (q->head->data).exe_time;
            (q->head->data).exe_time = 0;
            (q->head->data).fin_time = total_time;
            printf("%s %d\n", 
                    (q->head->data).name, total_time);
            /*int proc_no = find_proc((q->head->data).name, proc, proc_num);
            proc[proc_no].fin_time = total_time;*/
            //pop from queue
            node *temp_x = q->head;
            q -> head = q->head->next;
            free(temp_x);
        }
    }
    
    /*qsort(proc, proc_num, sizeof(*proc), compare_find_time);

    for(int i=0; i<proc_num; i++){
        printf("%s %d\n", proc[i].name, proc[i].fin_time);
    }*/

    
    /*while(!empty(q)){
        printf("%s %d\n", dequeue(q).name, dequeue(q).num);
    }*/
    //printf("\n");
}

