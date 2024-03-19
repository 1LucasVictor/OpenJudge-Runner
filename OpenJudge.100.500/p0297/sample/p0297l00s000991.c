#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head = 0, tail = 0, n;
int totalt = 0;

int isEmpty(){
  if(head == tail)
    return 1;
  else return 0;
}

int isFull(){
  if(head == (tail+1)%LEN)
    return 1;
  else return 0;
}

void enqueue(P x){
  if(isFull() == 1)
    printf("Fullerror\n");
  Q[tail] = x;
  if(tail+1 == LEN)
    tail = 0;
  else
    tail++;
}

P dequeue(){
  P x;
  if(isEmpty() == 1)
    printf("Emptyerror\n");
    x = Q[head];
    if(head+1 == LEN)
      head = 0;
    else
      head++;
    return x;
  
}


int main(){
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head = 1;
  tail = n + 1;
  while(isEmpty() != 1){
    u = dequeue();
    if(u.t > q){
      totalt += q;
      u.t -= q;
      enqueue(u);
    }
    else{
      totalt += u.t;
      u.t = 0;
      printf("%s %d\n", u.name, totalt);
    }
  }


  return 0;
}