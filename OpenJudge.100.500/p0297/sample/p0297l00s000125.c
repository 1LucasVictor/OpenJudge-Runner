#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 100005 

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void initialize(void){

  head = tail = 0;
}

int isEmpty(void){
  
  if(head == tail){
    return 1;
  }
  else return 0;
}

int isFull(void){

  if(head == (tail + 1) % LEN){
    return 1;
  }
  else return 0;
}

void enqueue(P x){
  
  if(isFull()){
    fprintf(stderr,"Overflow\n");
    exit(1);
  }
  Q[tail] = x;
  if(tail + 1 == LEN){
    tail = 0;
  }
  else 
    tail++;
}

P dequeue(){
  P x;

  if(isEmpty()){
    fprintf(stderr,"Underflow\n");
    exit(2);
  }
  x = Q[head];
  if(head + 1 == LEN){
    head = 0;
  }
  else 
    head ++;
  return x;
}

int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 0; i < n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }

  head = 0;
  tail = n;
  while(head != tail){
    u = dequeue();
    if(q > u.t)c = u.t;
    else c = q;
    u.t = u.t - c;
    elaps = elaps + c;
    if(u.t > 0)enqueue(u);
    else printf("%s %d\n",u.name,elaps);
  }
  
  return 0;
}