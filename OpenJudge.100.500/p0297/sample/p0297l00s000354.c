#include <stdio.h>
#include <string.h>

#define LEN 100005

typedef struct pp{
  char name[100];
  int time;
} Process;

void enqueue(Process);
Process dequeue();

Process p[LEN];
int head, tail, n;

int main(){
  int i, q, alltime = 0;
  Process x;
  int p_t;
  
  scanf("%d %d", &n, &q);

  for(i = 1 ; i <= n ; i++){
    scanf("%s", (p + i)->name);
    scanf("%d", &p[i].time);
  }
  head = 1;
  tail = n + 1;

  while(head != tail){
    x = dequeue();

    if(x.time < q)p_t = x.time;
    else p_t = q;

    alltime += p_t;
    x.time -= p_t;

    if(x.time > 0)enqueue(x);
    else printf("%s %d\n", x.name, alltime);    
  }

  return 0;
}

void enqueue(Process x){
  p[tail] = x;
  tail = (tail + 1) % LEN;  
}

Process dequeue(void){
  Process dq = p[head];
  head = (head + 1) % LEN;
  return dq;  
}

