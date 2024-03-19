// ALDS1_3_B 
#include <stdio.h>
#include <string.h>
#define MAX 100005

typedef struct process{
    char name[1000];
    int time;
}P;
P Q[MAX];
int head, tail, n;

int isEmpty(){
    return head==tail;
}
int isFull(){
    return head==(tail+1)%MAX;
}
void enqueue(P x){
    if(isFull()){
        puts("overflow");
        return;
    }
    Q[tail] = x;
    tail = (tail+1)%MAX;
}

P dequeue(){
    if(isEmpty()){
        puts("underflow");
    }
    P x = Q[head];
    head = (head+1)%MAX;
    return x;
}
int main(void){
    int i, q;
    int elaps=0, c;
    P u;
    scanf("%d%d", &n, &q);
    for(i=0; i<n; i++){
        scanf("%s", Q[i].name);
        scanf("%d", &Q[i].time);
    }
    head=0, tail=n;
    while(head!=tail){
        u=dequeue();
        c = q<u.time ? q : u.time;
        u.time -= c;
        elaps += c;
        if(u.time > 0)enqueue(u);
        else{
            printf("%s %d\n", u.name, elaps);
        }
    }
    return 0;
}
