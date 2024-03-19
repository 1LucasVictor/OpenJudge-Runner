#include<stdio.h>
#include<string.h>

#define LEN 1000000

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head=1, tail=1, n;

void enqueue(P x){
  Q[tail] = x;
  if(tail+1==LEN){
    tail = 0;
  }
  else{
    tail++;
  }   
}

P dequeue(){
  P a;
  a = Q[head];
  if(head+1==LEN){
    head = 0;
  }
  else{
    head++;
  }
  return a;
}
 
 
int main(){
  int c=0,ans=0;
  int i,q,count=0;
  scanf("%d %d",&n,&q);

  for(i=1;i<=n;i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);
    enqueue(Q[i]);
  }


  
  while(1){
    c++;
    if(n==count)break;
    if(Q[c].t-q>0){
      ans+=q;
      Q[c].t-=q;
      enqueue(Q[c]);
    }
    else{
      ans+=Q[c].t;
      printf("%s %d\n",Q[c].name,ans);
      count++;
      Q[c]=dequeue();
    }
  }
  
  return 0;
}