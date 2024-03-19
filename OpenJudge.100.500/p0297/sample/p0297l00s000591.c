#include<stdio.h>
#include<string.h>
#define LEN 100005
int min(int x,int y){
  return x<y?x:y;
}
typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P x){
  Q[tail]=x;
  if(tail==LEN){
    tail=1;
  }
  else tail=tail+1;
}

P dequeue(){
  P x=Q[head];
  if(head==LEN)head=1;
  else head++;
  return x;
}


int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
    tail=n+1,head=1;
  }
  while(head!=tail){
    u=dequeue();
    c=min(q,u.t);
    u.t-=c;;
    elaps+=c;
    if(u.t>0){
      enqueue(u);
    }
    else{
      printf("%s %d\n",u.name,elaps);
    }
  }
  return 0;
}

