#include<stdio.h>
#define LEN 100000

typedef struct{
  char name[10];
  int time;
}P;
  
int head=0;
int tail=0;
P Q[LEN];

void enqueue(P);
P dequeue(void);

int main(){
  int q,i,n,sum=0;
  P u;
  scanf("%d%d",&n,&q);
  
  for (i=0;i<n;i++){
    scanf("%s%d",Q[i].name,&Q[i].time);
    enqueue(Q[i]);
  }
  i=0;
  while(i!=n){
    u=dequeue();
    if(u.time<=q){
      sum+=u.time;
      u.time=sum;
      Q[i]=u;
      printf("%s %d\n",Q[i].name,Q[i].time);
      i++;
    }
    else{
      sum+=q;
      u.time=u.time-q;
      enqueue(u);


    }
  }


  
  return 0;
}


void enqueue(P x){
  Q[tail] = x;
  if(tail + 1 == LEN)
    tail = 0;
  else
    tail++;
}

P dequeue(){
  P x;
  x = Q[head];
  if(head + 1 == LEN)
    head = 0;
  else
    head++;
  return x;
}