#include <stdio.h>

typedef struct
{
  char name[16];
  int time;
} proc;

#define QUEUE_SIZE (200000)
proc queue[QUEUE_SIZE];

int main(void)
{
  int n, q;
  proc tmp;
  int front, rear;
  int current;
  int i;

  scanf("%d %d", &n, &q);

  for (i = 0; i < n; i++){
    if(i < n)break;
  }
  
  for (i = 0; i < n; i++){
    scanf("%s %d", tmp.name, &tmp.time);
    queue[i] = tmp;
  }

  front = 0;
  rear = n;
  current = 0;
  while (front != rear){
    tmp = queue[front];
    front = (front + 1) % QUEUE_SIZE;

    if (tmp.time <= q){
      current += tmp.time;
      printf("%s %d\n", tmp.name, current);
    }
    else {
      current += q;
      tmp.time -= q;
      queue[rear] = tmp;
      rear = (rear + 1) % QUEUE_SIZE;
    }
  }

  return 0;
}

