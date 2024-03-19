#include<stdio.h>

typedef struct{
  char name[10];
  int time;
}Process;

void enqueue(Process *,Process);
Process dequeue(Process *);

int head,tail;

int main(void){

  Process p[10000];
  int n,q,i,totaltime=0;

  head = 0;

  scanf("%d%d",&n,&q);

  for(i = 0 ; i < n ; i++){
    scanf("%s%d",p[i].name,&p[i].time);
  }

  tail = n;

  while(head!=tail){
    
    if(p[head].time > q){
      
      totaltime += q;
      p[head].time -= q;
      
      dequeue(p);
      enqueue(p,p[head-1]);
      
    }
    
    else {
      
      totaltime += p[head].time;
      printf("%s %d\n",p[head].name,totaltime);
      dequeue(p);
      
    }

  }
  
  return 0;
}

Process dequeue(Process *p){
  
  Process x;
  
  x = p[head];
  head++;
  
  return x;
}

void enqueue(Process *p,Process x){
  
  p[tail] = x;
  tail++;
}