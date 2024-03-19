#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head=0, tail=0, n;

void enqueue(P x){
  Q[tail]=x;
  if(tail+1==LEN)tail=0;
  else tail=tail+1; 
}

P dequeue(void){
  P x;
  x=Q[head];
  if(head+1==LEN)head=0;
  else head=head+1;
  return x;
}

int main(){
  int time=0, c;
  int i, j;
  P p;
  scanf("%d %d",&n,&j);

  for(i=1;i<=n;i++){
    scanf("%s %d",Q[i].name, &Q[i].t);
  }
  head = 1;
  tail =n+1;

  while(head != tail){
    p = dequeue();
    if(j<p.t)c=j;
    else c=p.t;
    p.t=p.t-c;
    time=time+c;
    if(p.t>0)enqueue(p);
    else{
      printf("%s %d\n",p.name,time);
    }
  }

  return 0;
}