#include<stdio.h>
#define length 300000

int  head = 0, tail = 0, n;

typedef struct process{
  char name[1000];
  int time;
} p;

void enqueue(struct process);
p Q[length + 1];
p dequeue();

int main(){
  int i, q, temp, passage = 0;
  p dq;

  scanf("%d %d", &n, &q);

  head = 1; 
  tail = n + 1;

  for(i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].time);
  }

  while( !(tail == head)){
    p dq = dequeue();
    if(q > dq.time)   temp = dq.time;
    else               temp = q;
    passage += temp;
    dq.time -= temp;
    if(dq.time > 0)   enqueue(dq);
    else                     printf("%s %d\n", dq.name, passage);
  }
      
  return 0;
}

void enqueue(p x){
  Q[tail] = x;
  if(tail + 1 == length)    tail = 0;
  else                               tail++;
}

p dequeue(){
  p x = Q[head];
  if(head + 1 == length)    head = 0;
  else                              head++;
  return x;
}