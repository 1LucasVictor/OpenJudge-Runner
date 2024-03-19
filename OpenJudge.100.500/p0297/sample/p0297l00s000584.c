#include<stdio.h>

#define LENGTH 100000

typedef struct node{
    char name[11];
    int rtime;
}Process;

Process queue[LENGTH];
int head;
int elem_num;

void enqueue(Process in){
    queue[(head+elem_num)%LENGTH] = in;
    elem_num++;
}

Process dequeue(void){
    Process ans;
    ans = queue[head];
    head++;
    head = head%LENGTH;
    elem_num--;
    return ans;
}

int isEmpty(void){
    if(elem_num == 0) return 1;
    else return 0;
}

int main(void){
    int n,q;
    int i;
    int time = 0;
    Process in;
    scanf("%d %d", &n, &q);
    
    for(i =0; i<n; i++){
        scanf("%s %d", in.name, &(in.rtime));
        enqueue(in);
    }
    
    while(!isEmpty()){
        in = dequeue();
        if(in.rtime - q <= 0){
            time += in.rtime;
            printf("%s %d\n", in.name, time);
        }
        else{
            in.rtime -= q;
            time += q;
            enqueue(in);
        }
    }
    
    return 0;
}