#include <stdio.h>
#include <stdlib.h>

#define MAX 100001
#define LEN 11

static int head = 0;
static int tail = 0;
static int queue[MAX];

void enqueue(int x);
int dequeue(void);
int isEmpty(void);
int isFull(void);


int main(void){
  int i, x, n, q, *time, sum = 0;
  char **name;

  scanf("%d%d", &n, &q);
  name = (char **)malloc(sizeof(char *) * n);
  time = (int *)malloc(sizeof(int) * n);
  for(i = 0; i < n; i++){
    name[i] = (char *)malloc(sizeof(char) * LEN);
    scanf(" %s%d", name[i], &x);
    time[i] = x;
    enqueue(i);
  }

  while(!isEmpty()){
    i = dequeue();
    if(time[i] > q){
      time[i] -= q;
      sum += q;
      enqueue(i);
    }else{
      sum += time[i];
      printf("%s %d\n", name[i], sum);
    }
  }
  
  for(i = 0; i < n; i++){
    free(name[i]);
  }
  free(name);
  return 0;
}


void enqueue(int x){
  if(isFull()){
    printf("?????????????????????\n");
    exit(1);
  }
  queue[tail] = x;
  tail = (tail + 1) % MAX;
}


int dequeue(void){
  int x;
  if(isEmpty()){
    printf("??¢??????????????????\n");
    exit(1);
  }
  x = queue[head];
  head = (head + 1) % MAX;
  return x;
}


int isEmpty(void){
  return head == tail;
}


int isFull(void){
  return head == (tail + 1) % MAX;
}