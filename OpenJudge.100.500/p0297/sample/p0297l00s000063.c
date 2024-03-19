#include <stdio.h>
#include <string.h>

#define L 100005

typedef struct{
  char name[100];
  int t;
}Pro;

Pro Q[L];
int head,matu,n;

void enque(Pro a){
  Q[matu]=a;
  matu=(matu+1)%L;
}

Pro dque(){
  Pro a=Q[head];
  head=(head+1)%L;
  return a;
}

int min(int a,int b){
  if(a<b)return a;
  else return b;
}

int main(){
  int i,q,c,el=0;
  Pro a;

  scanf("%d %d", &n, &q);

  for(i=1;i<=n;i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head=1;
  matu=n+1;

  while(head!=matu){
    a=dque();
    c=min(q,a.t);
    a.t-=c;
    el+=c;

    if(a.t>0)enque(a);
    else {
      printf("%s %d\n",a.name,el);
    }
  }

  return 0;
}