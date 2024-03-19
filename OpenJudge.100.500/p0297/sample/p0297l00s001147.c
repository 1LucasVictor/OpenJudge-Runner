#include<stdio.h>

#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head=0, tail=0, n;

void enqueue(P x){
  Q[tail]=x;
  if(tail+1==LEN)
    tail=0;
  else tail++;
}

P dequeue(){
  P x;
  x=Q[head];
  if(head+1==LEN)
    head=0;
  else head++;
  return x;
}

int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d%d",&n,&q);

  for (i=1;i<=n;i++){
    scanf("%s", u.name);
    scanf("%d", &u.t);
    enqueue(u);
  }
  while(head!=tail){
    u=dequeue();
    if(q<u.t){
      elaps=elaps+q;
      u.t=u.t-q;
      enqueue(u);
    }
    else {
      elaps=elaps+u.t;
      printf("%s %d\n",u.name,elaps);

    }
  }
  
  return 0;
}

