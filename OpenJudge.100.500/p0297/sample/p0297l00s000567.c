#include <stdio.h>
#include <string.h>
#define LEN 1000005

typedef struct qq{
  char name[10];
  int t;
}queue;

queue Q[LEN];
int head, tail, n;

void enqueue(queue x){
  Q[tail] = x;
  tail = (tail + 1) % LEN;
}

queue dequeue(){
  queue x = Q[head];
  head = (head + 1) % LEN;
  return x;
}

int min(int a, int b) {
  if(a<b) return a;
  else return b;
}

int main(){
  int costtime = 0, c;
  int i, q;
  queue box;

  scanf("%d %d", &n, &q);

  for(i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }

  head = 1; tail = n + 1;

  while(head !=  tail){
    box = dequeue();
    c = min(q, box.t);
    box.t -= c;
    costtime += c;
    if(box.t > 0) enqueue(box);
    else{
      printf("%s %d\n", box.name, costtime);
    }
  }
  
  return 0;
}

