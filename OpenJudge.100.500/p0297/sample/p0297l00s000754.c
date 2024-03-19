#include<stdio.h>
#define N 8

typedef struct process{
    char name[100];
    int time;
} Proc;

Proc P[N];
int head, tail = 0;

void enqueue(Proc p){
    P[tail] = p;
    tail++;
    if(tail >= N){
        tail = 0;
    }
}

Proc dequeue(){
    Proc tmp = P[head];
    head++;
    if(head >= N){
        head = 0;
    }
    return tmp;
}

int isEmpty(){
    return head == tail;
}

void trace(){
    printf("%d %d\n", head, tail);
    for(int i = head; i < tail; i++){
        printf("%s %d\n", P[i].name, P[i].time);
    }
}

int main(){
    int n, q;
    int elapsed = 0;
    scanf("%d %d", &n, &q);

    for(int i = 0; i < n; i++){
        scanf("%s %d", P[i].name, &P[i].time);
    }
    head = 0;
    tail = n;
 //   trace();

    while(!isEmpty()){
        Proc p = dequeue();
        if(p.time > q){
            p.time -= q;
            enqueue(p);
            elapsed += q;
        }else{
            elapsed += p.time;
            printf("%s %d\n", p.name, elapsed);
        }
    }

}