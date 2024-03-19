#include<stdio.h>
#include<stdlib.h>
#define LEN 100005
#define F -1
typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head=1, tail=1, n;

void enqueue(P x){
  
  Q[tail] = x;
  if ((tail + 1) == LEN)
    tail = 0;
  else
    tail++;
}

P dequeue(){
  P x;
  
  x = Q[head];
  if ((head + 1) == LEN)
    head = 0;
  else
    head++;
  return x;
    }


int main(){
  int elaps=0,c=0;
  int i, q;
  P u;
  scanf("%d %d",&n,&q);

  for (i=1;i<=n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);
    tail++;

    
  }
  while(c!=n){
    u=dequeue();
    if(u.t>q){
      elaps+=q;
      u.t=u.t-q;
      enqueue(u);
    }
    else{
      elaps+=u.t;
      printf("%s %d\n",u.name,elaps);
      c++;
    }   
  }

  return 0;
}


