#include<stdio.h>
#define name 10
#define N 100005
typedef struct{
 char s[name];
  int time;
}R;
R a[N+1];
int head,tail;
void Enqueue(R );
R Dequeue(void);
int main()
{
  int i,n,q,T=0;
  R y;
  scanf("%d%d",&n,&q);
  for(i=0;i<n;i++){
    scanf("%s%d",y.s,&y.time);
    Enqueue(y);
  }
  while(n!=0){
    y=Dequeue();
    if(y.time>q){
      y.time=y.time-q; 
      T+=q;
      Enqueue(y);
    } 
    else{
      T=T+y.time;
      printf("%s %d\n",y.s,T);
      n--;
    }
  }
  return 0;
}

void Enqueue(R Y){
  if(N==tail) tail=0; 
    a[tail]=Y;
    tail++;
}

R Dequeue(void){
  if(head==N) head=0;
  return a[head++];
}