#include <stdio.h>
#include <string.h>
#define LEN 100005

typedef struct pp{
  char name[11];
  int time;
}P;
P Q[LEN];
int head,tail,n;

void enqueue(P);
P dequeue();
int min(int,int);

int main(){
  int el = 0,c;
  int i,q;
  P data;
  scanf("%d %d",&n,&q);
  for(i=1;i<=n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].time);
  }
  head=1;
  tail=n+1;
  while(head!=tail){
    data=dequeue();
    c=min(q,data.time);
    data.time -= c;
    el += c;
    if(data.time>0)enqueue(data);
    else printf("%s %d\n",data.name,el);
  }
  return 0;
}

void enqueue(P data){
  Q[tail] = data;
  tail = (tail + 1)%LEN;
}

P dequeue(){
  P data = Q[head];
  head = (head + 1)%LEN;
  return data;
}

int min(int x,int y){
  if(x<y) return x;
  else return y;
}

