#include <stdio.h>
#define MAX 100000

typedef struct{
  char name[11];
  int time;
}process;

int isEmpty();
process dequeue();
void enqueue(process x);

process p[MAX];
int head=0,tail=0;

int main(){
  int i,n,q,t=0;
  process alt;

  // input
  scanf("%d %d",&n,&q);
  for(i=0;i<n;i++){
    scanf("%s %d",alt.name,&alt.time);
    enqueue(alt);
  }
  // processing
  while(head!=tail){
    if(p[head].time>q){
      p[head].time-=q;
      t+=q;
      alt=dequeue();
      enqueue(alt);
    }
    else {
      t+=p[head].time;
      alt=dequeue();
      printf("%s %d\n",alt.name,t);
    }
  }  
  return 0;
}

int isEmpty(){
  if(tail==head)return 1;
  else return 0;
}

process dequeue(){
  process alt;
  alt = p[head];
  if(head+1==MAX)head=0;
  else head++;    
  return alt;  
}

void enqueue(process x){
  p[tail]=x;
  if(tail+1==MAX)tail=0;
  else tail++;
}