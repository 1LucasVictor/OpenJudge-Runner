#include <stdio.h>
#include <stdlib.h>
typedef struct queue {
  char name[10];
  int time;
} queue;
int Roop(int,int);
int main(){
  int n, q, total=0, i; //n->?????° q->??????????????? total->????????????
  queue *Q, temp;
  scanf("%d%d",&n,&q);
  Q = (queue *)malloc(sizeof(queue) * n);
  for(i=0; i<n; i++) scanf("%s%d",Q[i].name,&Q[i].time);
  while(n){
    if(Q[0].time > q){
      total += q;
      Q[0].time -= q;
      for(i=0,temp=Q[0]; i<n-1; i++) Q[i] = Q[i+1];
      Q[n-1] = temp;
    }
    else if(Q[0].time == q){
      total += q;
      printf("%s %d\n",Q[0].name,total);
      for(i=0; i<n-1; i++) Q[i] = Q[i+1];
      n--;
    }
    else{
      total += Q[0].time;
      printf("%s %d\n",Q[0].name,total);
      for(i=0; i<n-1; i++) Q[i] = Q[i+1];
      n--;
    }
  }
  return 0;
}