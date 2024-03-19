#include <stdio.h>
#include <string.h>
#define LEN 100000

typedef struct p{
  char name[10];
  int time;
}P;

P Q[LEN+1];
int head, tail, n;

//キューへの挿入
void enqueue(P x){
  Q[tail] = x;
  tail = (tail + 1)%LEN;
}
//キューからの取り出し
P dequeue(void){
  P x = Q[head];
  head = (head + 1)%LEN;
  return x;
}

int min(int a, int b){
  if(a <= b) return a;
  else return b;
}

int main(){
  int lap_time = 0, min_time, i, q;
  P x;
  scanf("%d %d", &n, &q);

  for (i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].time);
  }

  head = 1;
  tail = n+1;

  while(head != tail){
    x = dequeue();
    min_time = min(q, x.time);
    x.time -= min_time;
    lap_time += min_time;
    if(x.time > 0){
      enqueue(x);
    }
    else{
      printf("%s %d\n",x.name ,lap_time);
    }
  }
  return 0;
}
