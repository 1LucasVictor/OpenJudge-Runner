#include<stdio.h>
#define N 10000
#define s 100
typedef struct{
 char name[s];
  int time;
}Queue;
Queue A[N+1];
int h=0,t=0;
void Enqueue(Queue);
int main()
{
  int n,q;
  int i,T=0;
  Queue j;
  scanf("%d%d",&n,&q);
  for(i=0;i<n;i++){
    scanf("%s%d",j.name,&j.time);
    Enqueue(j);
  }
  while(n>0){
    j=A[h++];
    if(j.time>q){
      j.time=j.time-q; 
      T+=q;
      Enqueue(j);
    } 
    else{
      T+=j.time;
      printf("%s %d\n",j.name,T);
      n--;
    }
  }
  return 0;
}
void Enqueue(Queue J){ 
    A[t]=J;
    t++;
}