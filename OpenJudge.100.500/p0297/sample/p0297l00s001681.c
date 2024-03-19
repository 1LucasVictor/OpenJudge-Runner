#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN];
int head, tail, n;

void enqueue(P a){
  Q[tail]=a;
  tail=(tail+1)%LEN;
}
P dequeue(){
  P a = Q[head];
  head = (head+1)%LEN;
  return a;
}
int min(int n,int m){return n < m ? n : m;}
int main(){
  int elaps = 0,cha;
  int i,j;
  P u;
  scanf("%d %d",&n,&j);
  for(i=1;i<=n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);
  }
  head=1;tail=n+1;
  while(head != tail){
    u = dequeue();
    cha = min(j,u.t);
    u.t -= cha;
    elaps += cha;
    if(u.t > 0)enqueue(u);
    else{
      printf("%s %d\n",u.name,elaps);
    }
  }
  return 0;
}

