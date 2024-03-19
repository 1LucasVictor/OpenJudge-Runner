#include<stdio.h>
#define N 100000

typedef struct data{
  char name[100];
  int t;
}D;

D Q[N];
int head ,tail,n;
void enq(D);
D deq();
int min(int,int);

int main(){
  int n,q,i,time,total=0;
  D que;
  scanf("%d %d",&n,&q);
  for(i=1;i<=n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);
  }
  head=1;
  tail=n+1;
  while(head!=tail){
    que=deq();
    time=min(q,que.t);
    que.t-=time;
    total+=time;
    if(que.t>0)enq(que);
    else printf("%s %d\n",que.name,total);
  }
  return 0;
}

void enq(D que){
  Q[tail]=que;
  tail=(tail+1)%N;
}

D deq(){
  D x=Q[head];
  head=(head+1)%N;
  return x;
}

int min(int x,int y){
  if(x>y)return y;
  else return x;
}

