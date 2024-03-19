#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head = 1, tail, n;

void enqueue(P x){
  Q[tail].t = x.t;
  strcpy(Q[tail].name,x.name);
  tail++;
}

P dequeue(){
  head++;
  return Q[head-1];
}

int main(){
  int i, q, time = 0;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }  

  tail = n + 1;

  while(tail != head){
    u = dequeue();

    if(u.t>q){
      time += q;
      u.t -= q;
      enqueue(u);
    }
    else{
      time += u.t;
      printf("%s %d\n",u.name,time);
    }
  }
  return 0;
}