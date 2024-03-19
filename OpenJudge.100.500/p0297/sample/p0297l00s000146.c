#include <stdio.h>
#include <string.h>

#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN];
int head,tail,n;



void enqueue(P X){
  Q[tail]=X;
  tail=(tail+1)%LEN;
}

P dequeue(){
  P X = Q[head];
  head=(head+1)%LEN;
  return X;
}
int min(int a,int b){
  if(a<b)return a;
  else return b;
}



int main(){
  P u;
  int elaps=0;
  int i,q,c;

  scanf("%d%d",&n,&q);

  for(i=1;i <= n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);
  }

  head=1;
  tail=n+1;

  while(head!=tail){

    u=dequeue();
    c=min(q,u.t);
    u.t-=c;
    elaps = elaps+c;

    if(u.t>0)enqueue(u);

    else {
      printf("%s %d\n",u.name,elaps);
    }

  }

  return 0;
}

