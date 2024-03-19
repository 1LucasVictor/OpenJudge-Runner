#include<stdio.h>
#define length 100000

int  head = 0, tail = 0, n;

struct process{
  char name[1000];
  int time;
};

void enqueue(struct process);
struct process Q[length];
struct process dequeue();

int main(){
  int i, q, temp, passage = 0;
  struct process dq;

  scanf("%d %d", &n, &q);

  for(i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].time);
  }

  head = 1; 
  tail = n + 1;


  
  while( !(tail == head)){
    struct process dq = dequeue();
    if(q > dq.time)   temp = dq.time;
    else               temp = q;
    passage += temp;
    dq.time -= temp;
    if(dq.time > 0)   enqueue(dq);
    else                     printf("%s %d\n", dq.name, passage);
  }
      
  return 0;
}

void enqueue(struct process x){
  Q[tail] = x;
  if(tail + 1 == length)    tail = 0;
  else                               tail++;
}

struct process dequeue(){
  struct process x = Q[head];
  if(head + 1 == length)    head = 0;
  else                              head++;
  return x;
}