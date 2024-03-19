#include <stdio.h>
#include <string.h>
#define L 100005

typedef struct p{
  char name[10];
  int time;
}P;

void en(P);
P de();
int min(int,int);

P Queue[L];
int head,tail,n;

int main(){
  int t=0;
  int c,q,i;
  P u;

  scanf("%d%d",&n,&q);
  for(i=0;i<n;i++){
    scanf("%s",Queue[i].name);
    scanf("%d",&Queue[i].time);
  }

  head=0;
  tail=n;

  while(head!=tail){
    u = de();
    c = min(q,u.time);
    u.time -= c;
    t += c;
    if(u.time >0)en(u);
    else{
      printf("%s %d\n",u.name,t);
    }
  }
  return 0;
}

void en(P x){
  Queue[tail]=x;
  tail=(tail+1)%L;
}

P de(){
  P x =Queue[head];
  head = (head+1)%L;
  return x;
}

int min(int a,int b){
  return a<b ? a : b;
}
  

