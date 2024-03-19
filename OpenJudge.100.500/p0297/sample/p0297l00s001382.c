#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int time;
} P;

int head, tail, n;
P Q[LEN];

P dequeue(){
  P x = Q[head];
  head = (head + 1) % LEN;
  return x;
}

void enqueue(P x){
  Q[tail] = x;
  tail = (tail + 1) % LEN;
}

int min(int a, int b){
  return a < b ? a : b;
}

int main(){
  int q, a;
  int i, elaps = 0;
  scanf("%d %d", &n, &q);

  for (i=1; i<=n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].time);
  }

  head = 1;
  tail = n + 1;

  while (head != tail){
    P u = dequeue();
    a = min(u.time, q);
    u.time -= a;
    elaps += a;
    if (u.time > 0){
      enqueue(u);
    } else {
      printf("%s %d\n", u.name, elaps);
    }
  }

  return 0;
}

