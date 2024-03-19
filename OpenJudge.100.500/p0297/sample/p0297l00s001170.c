#include <stdio.h>
#include <stdlib.h>
#define N 100000
#define Q 1000

typedef struct{
  char name[10];
  int time;
} Data;

void enqueue(Data);
Data dequeue(void);
int isEmpty(void);
int isFull(void);

int head, tail;
Data data[N];

int main(){
  int n, t, i, time = 0;
  Data d;

  scanf("%d%d", &n, &t);
  tail = n;

  for(i = 0; i < n; i++){
    scanf("%s%d", data[i].name, &data[i].time);
  } 

  while(head != tail){
    d = dequeue();
    if(d.time - t > 0){
      d.time -= t;
      enqueue(d);
      time += t;
    }
    else{
      time += d.time;
      printf("%s %d\n", d.name, time);
    }
  }

  return 0;
}

void enqueue(Data d){
  if(isFull() == -1){
    printf("overflow\n");
    exit(1);
  }
  data[tail] = d;
  if(tail + 1 == N) tail = 0;
  else tail++;
}

Data dequeue(){
  if(isEmpty() == -1){
    printf("underflow\n");
    exit(1);
  }
  head++;
  return data[head - 1];
}

int isEmpty(void){
  if(head == tail) return -1;
  else return 0;
}

int isFull(void){
  if(head == (tail + 1) % N) return -1;
  else return 0;
}