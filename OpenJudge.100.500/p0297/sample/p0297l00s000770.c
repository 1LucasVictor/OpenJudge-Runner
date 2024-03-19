#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

int initialize();
int isEmpty();
int isFull();
void enqueue(P);
P dequeue();

P Q[LEN+1];
int head, tail, n;

int main()
{
  int elaps = 0;
  int i, q;
  P u;

  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }

  head = 1;
  tail = n + 1;

  while(1){
    if(head == tail) break;

    u = dequeue();
    if(u.t > q){
      elaps += q;
      u.t = u.t - q;
      enqueue(u);
    }
    else{
      elaps += u.t;
      printf("%s ", u.name);
      printf("%d\n", elaps);
    }
  }
   
   return 0;
}


int isEmpty()
{
  if(head == tail) return 1;
  else return 0;
  }


int isFull()
{
  if(head == (tail + 1) % (LEN + 1)) return 1;
  else return 0;
}


void enqueue(P x)
{
  if(isFull() == 0){
    Q[tail] = x;
    if(tail + 1 == (LEN + 1)) tail = 0;
    else tail++;
  }
}

P dequeue()
{
  P x;

  if(isEmpty() == 0){
    x = Q[head];
    if(head + 1 == (LEN + 1)) head = 0;
    else head++;
  }
  return x;
}