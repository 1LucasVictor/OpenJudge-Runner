#include<stdio.h>
#include<string.h>


#define N_MAX 100005
#define len 10

typedef struct task{
  char name[len];
  int time;
}T;



int main(void){
  int i,n,q,take=0,head,tail;
  T Q[N_MAX];

  scanf("%d %d",&n,&q);//入力
  

  for(i=1;i<=n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].time);
  }

  head=1;
  tail=n+1;

  while(head!=tail){
    if(Q[head].time<=q && Q[head].time!=0){
      take+=Q[head].time;
      printf("%s %d\n",Q[head].name,take);
      if(head==N_MAX-1) head=0;            
    }
    
    else {
      take+=q;
      Q[head].time-=q;
      Q[tail]=Q[head];//引いた値を最後尾へ
      if(head==N_MAX-1) head=0;
      if(tail==N_MAX-1) tail=0;
      tail++; 
    }
    head++;
  }

  
  return 0;
}

