#include<stdio.h>

#define MAX 100000

typedef struct {
  char name[10];
  int time;
}Roll;

void enqueue(Roll);
Roll dequeue(void);

 Roll data[MAX];
int head=0,tail=0;

int main(){
  int n,q,i,sumtime;
  Roll input,output;
 
  scanf("%d%d",&n,&q);
  for(i=1;i<=n;i++){
    scanf("%s%d",input.name,&input.time);
    enqueue(input);
  }
  while(head!=tail){
    if((data[head].time-q)<=0){
      output=dequeue();
      sumtime+=output.time;
      printf("%s %d\n",output.name,sumtime);
    } else {
      output=dequeue();
      sumtime+=q;
      output.time-=q;
      enqueue(output);
    }
  }

  return 0;
}
      

void enqueue(Roll p){
  data[tail]=p;
  tail=(tail+1)%MAX;
}

Roll dequeue(void){
  Roll p;
  p=data[head];
  head=(head+1)%MAX;
  return p;
}
    
