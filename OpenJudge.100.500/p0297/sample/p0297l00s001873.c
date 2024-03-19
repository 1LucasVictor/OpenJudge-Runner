#include<stdio.h>
#define N 100001

typedef struct{
  char name[10];
  int time;
}P;

P dequeue(P *, int *, int);
int min(int, int);
void enqueue(P *, P, int *, int);

int main(){
  int i, n, q, c, head=1, tail, elaps=0;
  P Q[N], u;

  scanf("%d%d", &n, &q);
  for(i=1; i<=n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].time);
  }

  tail = n+1;
  while(head != tail){
    u = dequeue(Q, &head, n);
    c = min(q, u.time);
    u.time -= c;
    elaps += c;
    if(u.time > 0)enqueue(Q, u, &tail, n);
    else{
      printf("%s %d\n", u.name, elaps);
    }
  }
  return 0;
}

P dequeue(P *Q, int *head, int n){
  P x = Q[*head];
  *head = (*head + 1) % N;
  return x;
}

int min(int a, int b){
  if(a <= b)return a;
  else return b;
}

void enqueue(P *Q, P u, int *tail, int n){
  Q[*tail] = u;
  *tail = (*tail + 1) % N;
}

