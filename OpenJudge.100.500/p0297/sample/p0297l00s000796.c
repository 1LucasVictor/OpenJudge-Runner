#include <stdio.h>
#include <string.h>
#define MAX_N 100000
 
typedef struct process{
    char name[20];
    int time;
} P;
 
P queue[MAX_N];
int head, tail;
 
void initialize(){
    head = 0;
    tail = 0;
}
 
void enqueue(P x){
    queue[tail] = x;
    tail = (tail+1) % MAX_N;
}
 
P dequeue(){
    P x = queue[head];
    head = (head+1) % MAX_N;
    return x;
}
 
int main(){
    int i, n, q;
    scanf("%d %d\n", &n, &q);
 
    for(i = 0; i < n; i++){
        P que;
        scanf("%s %d", que.name, &que.time);
        enqueue(que);
    }
 
    int elapsed = 0;
    while (head != tail){
        P proc = dequeue();
        if (proc.time <= q){
            elapsed += proc.time;
            printf("%s %d\n", proc.name, elapsed);
        }else{
            elapsed += q;
            proc.time -= q;
            enqueue(proc);
        }
    }
 
    return 0;
}