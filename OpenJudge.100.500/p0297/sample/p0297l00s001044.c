#include<stdio.h>
#include<stdlib.h>

int head=0,tail,n;
typedef struct{
  char name[100];
  int time;
}Process;

Process Q[1000000];

Process dequeue(){
  tail++;  
  return Q[tail-1];
}

void enqueue(Process x){
  Q[head]=x;
  head++;
}


main(){
  int q,i,total=0;
  Process x;
  scanf("%d %d",&n,&q);
  for(i=0;i<n;i++){
    scanf("%s %d",x.name,&x.time);
    enqueue(x);  
  }
  while(1){
    x = dequeue();
    if(x.time <= q){
      total += x.time;
      printf("%s %d\n",x.name,total);
    }
    else{
      x.time -=q;
      total+=q;
      enqueue(x);
    }
    if(head == tail)break;
  }
  return 0;
}