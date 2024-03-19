#include <stdio.h>
#define MAX 100000

typedef struct {
  char name[10];
  int time;
} P;

void enqueue(P);
P dequeue(void);

P Q[MAX];

int tail,n,head=1;

int main(){

  int q,i,b,c;
  int t=0;
  P d;

  scanf("%d %d",&n,&q);

  for(i=1;i<=n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].time);
  }

  head=1;
  tail=n+1;

  while(head!=tail){
    d=dequeue();
    if(d.time>=q) c=q;
    else c=d.time;
    d.time=d.time-c;
    t=t+c;
    if(d.time>0) enqueue(d);
    else{
      printf("%s %d\n",d.name,t);
    }
  }

  return 0;

}

void enqueue(P a){
  Q[tail]=a;
  if(tail+1==MAX) tail=1;
  else tail++;
}

P dequeue(void){
  P a;
  a=Q[head];
  if(head+1==MAX) head=0;
  else head++;
  return a;
}