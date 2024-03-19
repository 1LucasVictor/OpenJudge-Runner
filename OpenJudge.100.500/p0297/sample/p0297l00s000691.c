#include<stdio.h>
#include<string.h>
#define Q_MAX 100000

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[Q_MAX+1];
int head, tail, n;

void enqueue(P x){
  Q[tail] = x;
  tail = (tail+1)%Q_MAX;
}

P dequeue(){
  P res = Q[head];
  head = (head+1)%Q_MAX;
  return res;
}

int empty(){
  return (head==tail?1:0);
}

int main(){
  int elaps,c;
  int i, q;
  P u;
  elaps=0;
  scanf("%d %d", &n, &q);
  head = 1;
  tail = n+1;

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }

  while(empty()==0){
    u = dequeue();
    if(u.t > q){
      u.t -= q;
      enqueue(u);
      elaps += q;
    }else{
      elaps += u.t;
      printf("%s %d\n",u.name, elaps);
    }
  }
  return 0;
}

