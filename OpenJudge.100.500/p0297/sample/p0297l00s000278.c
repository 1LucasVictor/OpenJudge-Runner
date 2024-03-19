#include<stdio.h>
#include<string.h>
#define LEN 100000

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head=1, tail=1, n;

void enqueue(P x){
  Q[tail] = x;
  if(tail + 1 == LEN){
    tail = 0;
  }
  else{ tail++;}
}

P dequeue(){
  P x;
  x = Q[head];
  if(head + 1 == LEN){
    head = 0;
  }
  else{ head++;}
  return x;
}


int main(){
  int elaps = 0, c=0;
  int i, q,a=0;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
    enqueue(Q[i]);
  }
  while(1){
    elaps++;
    if(n==c)break;
    if(Q[elaps].t - q > 0){
      a += q;
      Q[elaps].t -= q;
      enqueue(Q[elaps]);
    }
    else {
      a += Q[elaps].t;
      printf("%s %d\n",Q[elaps].name,a);
      c++;
      Q[elaps] = dequeue();
    }
  }
  return 0;
}