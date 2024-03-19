#include <stdio.h>
#include <string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P x){
  Q[tail] = x;
  tail = (tail+1)%LEN;
}

P dequeue(){
  P R;
  R = Q[head];
  head = (head+1)%LEN;

  return R;
}

int min(int x,int y){
  return x < y ? x : y;
}

int main(){
  int i, q,time = 0,a;
  P u;

  scanf("%d %d", &n, &q);
  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }

  head = 1;
  tail = n+1;

  while(head != tail){
    u = dequeue();
    a = min(q,u.t);
    u.t -= a;
    time += a;
    if(u.t > 0){
      enqueue(u);
    }
    else{
      printf("%s %d\n",u.name,time);
    }
  }

  return 0;
}
