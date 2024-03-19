#include<stdio.h>
#include<stdlib.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

int isEmpty(){
  if(head == tail) return 1;
  else return 0;
}

int isFull(){
    if(head == (tail + 1) % LEN) return 1;
    else return 0;
}

void enqueue(P x){
  if (isFull()){
    printf("error\n");
    exit(1);
  }
  Q[tail] = x;
  if(tail == LEN) tail = 0;
  else  tail++;
}

P dequeue(){
  P x;

  if(isEmpty()){
    printf("error\n");
    exit(1);
  }

   x = Q[head];
   if(head == LEN) head = 0;
   else head++;
  return x;
}


int main(){
  int timer=0, cnt=0;
  int i,q;
  P u;

  scanf("%d %d", &n, &q);
  head = 1;
  tail = n+1;

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }

  while(cnt<n){
    if(Q[head].t-q>0){
      timer += q;
      Q[head].t -= q;
      enqueue(Q[head]);
    }
    else{
      timer += Q[head].t;
      printf("%s %d\n",Q[head].name,timer);
      cnt++;
    }
    dequeue();
  }


  return 0;
}

