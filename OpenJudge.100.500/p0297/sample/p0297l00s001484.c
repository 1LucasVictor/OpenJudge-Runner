#include<stdio.h>
#include<string.h>
#define N 100
#define NN 10000

struct Data{
  char name[N];
  int t;
};

struct Data Q[NN];
int n, head=0, tail=0;

void enqueue(struct Data x);

struct Data dequeue(void);

int main(){
  int i, q, count=0, time=0;
  struct Data a;

  scanf("%d%d", &n, &q);

  for(i = 0; i < n; i++)
    scanf("%s%d", Q[i].name, &Q[i].t);

  while(count != n){
    a = dequeue();

    if(a.t <= q){
      time += a.t;
      printf("%s %d\n", a.name, time);
      count++;
    }

    else{
      time += q;
      a.t -= q;
      enqueue(a);
    }
  }

  return 0;
}

void enqueue(struct Data x){
  Q[tail] = x;
  if(tail == n-1)
    tail = 0;
  else
    tail++;
}

struct Data dequeue(){
  struct Data x;
  x = Q[head];

  if(head == n-1)
    head = 0;
  else head++;

  return x;
}