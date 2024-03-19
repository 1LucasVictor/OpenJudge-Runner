#include <stdio.h>
#define N 100005

typedef struct{
  char p[100];
  int t;
}Pro;

void enqueue(Pro);
Pro dequeue(void);
int min(int, int);

Pro Q[N];
int head = 0, tail = 0, n = 0;

int main(){
  int elasp = 0, q = 0, c = 0;
  int i = 0;
  Pro u;

  /*Scan*/
  scanf("%d%d",&n,&q);

  for(i = 1; i <= n; i++){
    scanf("%s%d",Q[i].p,&(Q[i].t));
  }

  head = 1;
  tail = n+1;
  /*Queue*/
  while(head != tail){
    u = dequeue();
    c = min(q, u.t);
    u.t  = u.t - c;
    elasp = elasp + c;
    if(u.t > 0)enqueue(u);
    else printf("%s %d\n",u.p,elasp);
  }

  return 0;
}

void enqueue(Pro x){
  Q[tail] = x;
  tail = (tail + 1) % N;
}

Pro dequeue(){
  Pro x = Q[head];
  head = (head + 1) % N;
  return x;
}

int min(int a, int b){
  if(a < b)return a;
  else return b;
}

