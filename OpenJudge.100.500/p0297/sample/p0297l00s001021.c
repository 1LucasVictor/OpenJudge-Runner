#include<stdio.h>
#include<stdlib.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head=0, tail=0, n;

void enqueue(P x){
  Q[tail]=x;
  if(tail+1==n){
    tail=0;
  }
  else{
    tail++;
  }
}

P dequeue(){
  P x;
  x=Q[head];
  if(head+1==n){
    head=0;
  }
  else{
    head++;
  }
  return x;

}

int main(){
  int elaps = 0, c;
  int i, q,m;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
    enqueue(Q[i]);
  }
  m=n;
  while(1){
    u=dequeue();
    if(u.t<=0);
    else if(u.t<=q){
      elaps+=u.t;
      printf("%s %d\n",u.name,elaps);
      m--;
      if(m==0) break;
    }
    else{
      u.t-=q;
      elaps+=q;
      enqueue(u);
    }
  }
  return 0;
}




