#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P x);
P dequeue(void);
int isEmpty(void);
int isFull(void);
int min(int,int);

int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  int time=0;
  scanf("%d %d", &n, &q);
  
  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
 
  head = 1;
  tail = n+1;
  
  while(head!=tail){
    u=dequeue();
    c=min(q, u.t);
    u.t=u.t-c;
    elaps=elaps+c;
    if (u.t>0){
      enqueue(u);
    }
    else if(u.t<=0){
      printf("%s %d\n",u.name, elaps);
    }
  }
  
  return 0;
}
int isEmpty(){
  if(head == tail) return 1;
  else return 2;
}

int isFull(){
  if(head == ((tail+1)%LEN)) return 1;
  else return 2;
}

void enqueue(P x){
  if(isFull()==1){
    exit(1);
  }
  Q[tail] = x;
  if(tail+1==LEN){
    tail=0;
  }else{
    tail++;
  }
}    

P dequeue(){
  if(isEmpty()==1){
    exit(1);
  }
  P x=Q[head];
  if(head+1==LEN){
    head=0;
  }
  else{
    head++;
    return x;
  }
}
int min(int a, int b) {
  return a < b ? a : b;
}