#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000


struct queue{
    char name[10];
    int time;
};

void initialize();
int isFull();
int isEmpty();
void enqueue(struct queue);
struct queue dequeue();

int head;
int tail;

struct queue A[MAX];
struct queue Q[MAX];

int main(){
    int n,q;
    int total = 0;
    int flag = 1;
    struct queue x;

    scanf("%d %d",&n,&q);

    initialize();

    for(int i = 0;i < n;i++){
        scanf("%s %d",A[i].name,&A[i].time);
        enqueue(A[i]);
    }

    while(flag){
        x = dequeue();
        
        if(x.time - q > 0){
            total += q;
            x.time = x.time - q;
            enqueue(x);
        }
        else if(x.time - q == 0){
            total += q;
            printf("%s %d\n",x.name,total);
        }
        else{
            total += x.time;
            printf("%s %d\n",x.name,total);
        }

        flag = isEmpty() - 1;
    }

    return 0;
}

void initialize(){
    head = 0;
    tail = 0;
}

int isEmpty(){
    if(head == tail)return 1;
    return 0;
}

int isFull(){
    if(head == (tail+1) % MAX)return 1;
    return 0;
}

void enqueue(struct queue x){
    if(isFull()){
        fprintf(stderr,"OverFlow");
        exit(1);
    }
    Q[tail] = x;
    if(tail + 1 == MAX)tail = 0; 
    else tail++;
}

struct queue dequeue(){
    struct queue x;
    if(isEmpty()){
        fprintf(stderr,"AnderFlow");
        exit(1);
    }
    x = Q[head];
    if(head + 1 == MAX)head = 0;
    else head++;
    return x;
}
