#include<stdio.h>
#include<string.h>
int a;
int q;

typedef struct{
  char name[100];
  int time;
} Queue;

Queue Q[10000000];
int n;
int head = 0, tail = 0;

void enqueue(Queue x) {
  Q[head] = x;
  head++;
}

Queue dequeue() {
  tail++;
  return Q[tail-1];
}

int main(void){
  int i,j;
  int cnt;
  int SumOfTime = 0;
  Queue x;
  scanf("%d %d", &n, &q);

  for(i = 0; i < n; i++) {
    scanf("%s",x.name);
    scanf("%d",&x.time);
    enqueue(x);
  }

  while(1) {
    x = dequeue();
    if(x.time <= q) {
      SumOfTime += x.time;
      printf("%s %d\n", x.name, SumOfTime);
    } else {
      x.time -= q;
      SumOfTime += q;
      enqueue(x);
    }
    if(head == tail)break;
  }
  return 0;
}