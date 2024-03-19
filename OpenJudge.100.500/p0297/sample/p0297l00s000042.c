
#include<stdio.h>
#include<string.h>
#define LEN 10005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P);
P dequeue();


int main(){
  int elaps = 0, c = 0;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
    enqueue(Q[i]);
  }

  while(head != tail){
    u = dequeue();
  u.t = u.t - q;
  if(u.t <= 0){
    printf("%s %d\n",u.name, (u.t+q+(elaps*q)-c));
    c = c - u.t;
  } else{
  enqueue(u);
  }
    elaps++;
  }

  return 0;
}


void enqueue(P x){
  Q[tail] = x;
  tail++;
}

P dequeue(){
  head++;
  return Q[head-1];
}