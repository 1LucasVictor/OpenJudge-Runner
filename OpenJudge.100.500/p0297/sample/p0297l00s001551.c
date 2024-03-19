#include<stdio.h>
#define LEN 100000
#define A 1000
typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P x){
  tail++;
  Q[tail]=x;
  head++;
}

P dequeue(){ 
  head++;
  return Q[head];
}

int main(){
  int elaps = 0;
  int i, q,status;
  P u;
  status=scanf("%d %d", &n, &q);
  if(n>=LEN)printf("Too Large");
  else if(status==EOF)printf("Too Large");
  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
    tail++;
  }
  head=1;
  tail=n;
  while(1){

    if(Q[head].t-q<=0){
      elaps=elaps+Q[head].t;
      printf("%s %d\n",Q[head].name,elaps);
      dequeue();
    }
    else if(Q[head].t-q>0){
      enqueue(Q[head]);
      Q[tail].t=Q[tail].t-q;
      elaps=elaps+q;
    }
    if(Q[head].t<=0)break;
  }
  return 0;
}