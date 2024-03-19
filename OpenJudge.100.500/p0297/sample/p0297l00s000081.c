#include<stdio.h>
#include<string.h>
int d;
int q;

typedef struct {
  char name[100];
  int t;
}Process;

Process Q[10000000];
int n;
int head=0, tail=0;


void enqueue(Process x){
  Q[head]=x;
  head++;
}

Process dequeue(){
  tail++;
  return Q[tail-1];
}

int main(void){
  int i,j;
  int count;
  int time=0;
  Process x;
  scanf("%d %d", &n, &q);
  
  for ( i = 0; i < n; i++){
    scanf("%s", x.name);
    scanf("%d", &x.t);
    enqueue(x);
  }
  
  while(1){
    x=dequeue();
    if(x.t<=q){
      time+=x.t;
      printf("%s %d\n", x.name, time);
    }
    else{
      x.t-=q;
      time+=q;
      enqueue(x);
    }
    if(head-tail==0)break;
  }
  return 0;
}