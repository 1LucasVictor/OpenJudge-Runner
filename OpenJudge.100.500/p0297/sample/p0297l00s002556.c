#include <stdio.h>
#include <stdlib.h>

#define MAX 100000
#define TRUE 1
#define FALSE 0

typedef struct{
  char name[10];
  int time;
} Que;

void enqueue(Que );
Que dequeue(void);

Que Q[MAX+1];
int head;
int tail;

int main(){
  int n,q,i,sum=0;
  Que que;
  
  scanf("%d %d",&n,&q);
  
  for(i=0;i<n;i++){
    scanf("%s %d",que.name,&que.time);
    enqueue(que);
  }

  while(n!=0){
    que=dequeue();
    if(q<que.time){
          que.time -= q;
	  sum += q;
	  enqueue(que);
    }
    else{
      sum += que.time;
      printf("%s %d\n",que.name,sum);
      n--;
    }

  } 

  return 0;
}


void enqueue(Que x){

  if(tail==MAX) tail=0;
  Q[tail]=x;
  tail++;
}

Que dequeue(){

  if(head==MAX) head==0;
  return Q[head++];
}