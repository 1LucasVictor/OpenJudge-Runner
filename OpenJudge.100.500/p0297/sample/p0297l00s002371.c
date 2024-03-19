#include<stdio.h>
#define N 10005
#define s 10
typedef struct{
 char name[s];
  int time;
}Q;
Q A[N+1];
int h,t;
void Enq(Q);
Q Deq(void);
int main()
{
  int n,q,i,T=0;
  Q j;
  scanf("%d%d",&n,&q);
  for(i=0;i<n;i++){
    scanf("%s%d",j.name,&j.time);
    Enq(j);
  }
  while(n!=0){
    j=Deq();
    if(j.time>q){
      j.time=j.time-q; 
      T+=q;
      Enq(j);
    } 
    else{
      T+=j.time;
      printf("%s %d\n",j.name,T);
      n--;
    }
  }
  return 0;
}
void Enq(Q J){ 
  if(N==t) t=0;
  A[t]=J;
  t++;
}
Q Deq(void){
  if(h==N) h=0;
  return A[h++];
}