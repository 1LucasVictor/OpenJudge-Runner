#include<stdio.h>
#include<string.h>
#define LEN 100000

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN];
int head, tail, n;

void enqueue(P);
P dequeue();

int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 0; i < n; i++){
    scanf("%s %d", Q[i].name,&Q[i].t);
  }
  head = 0;
  tail = n;
  while(head != tail) {
    u = dequeue();
    if(u.t > q) {
      elaps += q;
      u.t -= q;
      enqueue(u);
    } else {
      elaps += u.t;
      u.t = 0;
      printf("%s %d\n",u.name,elaps);
    }
  }
  return 0;
}

void enqueue(P x){
  Q[tail] = x;
  if(tail == LEN) tail = 0;
  else tail++;
}

P dequeue(){
  P x = Q[head];
  if(head == LEN) head = 0;
  else head++;
  return x;
}