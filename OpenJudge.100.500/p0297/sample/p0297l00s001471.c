#include<stdio.h>

#define MAX_N 100000

int head=0, tail;
struct task{
    int time;
    char name[11];
}  que[MAX_N];


void enqueue(struct task);
struct task dequeue(void);

void enqueue(struct task q){
    que[tail] = q;
    if(tail == MAX_N -1){
        tail = 0;
    
    }else{
        tail++;
    }
}

struct task dequeue(){
    struct task t;
    t = que[head];

    if(head == MAX_N -1){
        head = 0;
    }else{
        head++;
    }

    return t;
}


int main(){
    int sum_time, q, n, process;
    struct task t;

    scanf("%d %d",&n ,&q);
    for(int i=0; i<n; i++){
        scanf("%s %d", que[i].name, &que[i].time);
    }

    tail = n;
    while(head != tail){
        t = dequeue();
        if(t.time > q){
            process = q;
        }else{
            process = t.time;
        }

        t.time -= process;
        sum_time += process;

        if(t.time > 0){
            enqueue(t);
        }else{
            printf("%s %d\n", t.name, sum_time);
        }
    }

    return 0;
}