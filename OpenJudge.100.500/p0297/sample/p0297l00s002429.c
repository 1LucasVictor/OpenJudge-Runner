#include<stdio.h>
#define LEN 100000

typedef struct{
  char name[10];
  int time;
}P;
  
int head;
int tail;
P Q[LEN];
void enqueue(P);
P dequeue(void);

int main(){
  int q,i,n,sum=0;
  P Q2[LEN];
  P u;
  scanf("%d%d",&n,&q);
  
  for (i=0;i<n;i++){
    scanf("%s%d",Q2[i].name,&Q2[i].time);
    enqueue(Q2[i]);
  }
  i=0;
  while(i!=n){
    u=dequeue();
    if(u.time<=q){
      sum+=u.time;
      u.time=sum;
      Q2[i]=u;
          i++;
    }
    else{
      sum+=q;
      u.time=u.time-q;
      enqueue(u);
    }

  }
  for(i=0;i<n;i++){
    printf("%s %d\n",Q2[i].name,Q2[i].time);
  }
  
  return 0;
}


void enqueue(P x){
  Q[tail] = x;
  tail++;
}

P dequeue(){
  P x;
  x = Q[head];
  head++;
  return x;
}