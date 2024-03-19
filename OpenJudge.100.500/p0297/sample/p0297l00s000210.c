#include<stdio.h>
#define LEN 100005
#define T 1
#define F 2

typedef struct  pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head = 1, tail, n; 

int isEmpty() {
  if(head == tail) return T;
  else return F;
}

void enqueue (P x) {
  Q[tail] = x;
  if(tail + 1 == LEN) tail = 0;
  else tail = tail + 1;
}

P dequeue() {
  if(head + 1 == LEN) {
    head = 0;
    return Q[head+1];
  }
  else head = head+1;
  return Q[head-1];
}


int main () {
  int elaps = 0, c;
  int i, q;
  P u;

  scanf("%d %d", &n, &q);

  for(i = 1; i <= n; i++) {
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  tail = n+1;

  while(isEmpty() != T) {
    u = dequeue();
    if (u.t - q <= 0) {
      elaps += u.t;
      printf("%s %d\n", u.name, elaps);
    }

    else {
      u.t -= q;
      enqueue(u);
      elaps += q; 
    }
  }
 
  return 0;
}