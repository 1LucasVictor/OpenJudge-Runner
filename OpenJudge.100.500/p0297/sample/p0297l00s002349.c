#include<stdio.h>
#include<string.h>
#define Len 100005

typedef struct p1{
  char name[100];
  int time;
}P;

P Q[Len];
int tail,head,n;

void En(P x){
  Q[tail]=x;
  tail=(tail+1)%Len;
}

P De(){
  P x=Q[head];
  head=(head+1)%Len;
  return x;
}

int min(int x,int y){
  return x<y?x:y;
}

int main(){
  int a=0,c,i,q;
  P b;

  scanf("%d %d",&n,&q);
  for(i=1;i<=n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].time);
  }
  head=1;
  tail=n+1;

  while(head!=tail){
    b=De();
    c=min(q,b.time);
    b.time-=c;
    a+=c;
    if(b.time>0)En(b);
    else {
      printf("%s %d\n",b.name, a);
    }
  }
  return 0;
}

