#include <stdio.h>
#include <stdlib.h>
#define LEN 100005

typedef struct{
  char name[100];
  int t;
}P;

void initialize();
char isEmpty();
char isFull();
void enqueue(P);
P dequeue();

P Q[LEN+1];
int head,tail,n,MAX;

int main(){
  int elaps=0,c;
  int i,q;
  P u;

  scanf("%d%d",&n,&q);
  initialize();
  MAX = n+1;
  for(i = 0; i < n; i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);
    tail++;
  }
  
  while(head != tail){
    u = dequeue();
    if(u.t > q){
      u.t -= q;
      elaps += q;
      enqueue(u);
    }
    else{
      elaps += u.t;
      printf("%s %d\n",u.name,elaps);
    }
  }

  return 0;
}


void initialize(){
  head = tail = 0;
}

char isEmpty(){
  return head == tail;
}

char isFull(){
  return head == (tail + 1) % MAX;
}

void enqueue(P x){
  if(isFull()){
    printf("エラー（オーバーフロー）\n");
    exit(1);
  }
  Q[tail] = x;
  if(tail + 1 == MAX)
    tail = 0;
  else
    tail++;

}

P dequeue(){
  P x;
  if(isEmpty()){
    printf("エラー（アンダーフロー）\n");
    exit(1);
  }
  x = Q[head];
  if(head + 1 == MAX)
    head = 0;
  else
    head++;
  return x;
}


