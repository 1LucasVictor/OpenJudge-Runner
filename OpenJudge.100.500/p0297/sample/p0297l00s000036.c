#include <stdio.h>
#include <string.h>
#define LEN 1000001

typedef struct pp{
  char name[100];
  int t;
}PP;

PP Q[LEN];
int head,tail;
int n;

PP deque(void);
void enqueue(PP);
int min(int,int);

int main(){
  int lap=0;
  int c;
  int i,q;
  PP u;

  scanf("%d%d",&n,&q);

  for(i=1;i<=n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);
  }

  head=1;
  tail=n+1;

  while(head!=tail) {
    u=deque();
    c=min(q,u.t);
    u.t-=c;
    lap+=c;
    if(u.t>0){
      enqueue(u);
    }else{
      printf("%s %d\n",u.name,lap);
    }
  }
  return 0;
}

PP deque(){
  PP x=Q[head];
  head=(head+1)%LEN;
  return x;
}

void enqueue(PP x){
  Q[tail]=x;
  tail=(tail+1)%LEN;
}

int min(int a,int b){
  if(a>b)return b;
  else return a;
}