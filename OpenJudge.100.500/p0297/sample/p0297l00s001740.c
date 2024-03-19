#include<stdio.h>
#include<string.h>
#define L 100005

typedef struct pp{
  char name[100];
  int t;
}A;

A deq();
void enq(A x);
A Q[L];
int t,h, n;

int min(int a,int b){ return a<b ? a : b;}

int main(){

  int elaps=0, c;
  int i, q;
  A u;

  scanf("%d %d", &n, &q);

  for(i=1;i<=n;i++){
    
    scanf("%s",Q[i].name);

    scanf("%d",&Q[i].t);

  }
  
  h=1; t=n+1;

  while(h !=t){

    u=deq();
    c=min(q, u.t);
    u.t -=c;
    elaps+=c;
    if(u.t>0) enq(u);
    else{
      printf("%s %d\n",u.name, elaps);
    }
  }

  return 0;
}



A deq(){
  A x =Q[h];
  h = (h+1)%L;
  return x;
}

void enq(A x){
  Q[t]=x;
  t=(t+1)%L;
}

