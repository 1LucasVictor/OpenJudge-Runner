#include<stdio.h>
#define max 300000

typedef struct process{
  char name[256];
  int time;
} p;

int  head = 0, tail = 0, n;
p Q[max];

void enqueue(p);
p dequeue(void);

int main(){
  int i, q, temp, passage = 0;
  p dq;

  scanf("%d%d", &n, &q);

  head = 1; 
  tail = n + 1;

  for(i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].time);
  }

  while(tail != head){
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
  if(tail + 1 == max)    tail = 0;
  else                           tail++;
}

p dequeue(void){
  p x = Q[head];
  if(head + 1 == max)    head = 0;
  else                              head++;
  return x;
}