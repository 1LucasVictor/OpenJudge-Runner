#include <stdio.h>

#define LEN 1000000
 
int head = 0, tail = 0;
int que[LEN];

int next[100][100];
int d[100] = {0};
int rank = 0;

int isempty() {
  return head == tail;
}
   
void enqueue(int x) {
  que[tail] = x;
  if ((tail + 1) == LEN)
    tail = 0;
  else
    tail++;
}
 
int dequeue() {
  int x;
  x = que[head];
  if ((head + 1) == LEN)
    head = 0;
  else
    head++;
  return x;
}

int next_enqueue(int u, int n) {
  for (int j = 0; j < n; j++) {
    if (next[u - 1][j] == 1 && d[j] == -1) {
      enqueue(j + 1);
      d[j] = d[u - 1] + 1;
    }
  }
  return isempty();
}

int main(void) {
  int n;
  int u, k, v;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &u);
    scanf("%d", &k);
    for (int j = 0; j < k; j++) {
      scanf("%d", &v);
      next[u - 1][v - 1] = 1;
    }
  }

  for (int i = 0; i < n; i++)
    d[i] = -1;

  u = 1;
  d[0] = 0;
  while (1) {
    if (next_enqueue(u, n) == 1)
      break;
    u = dequeue();
  }

  for (int i = 1; i < n; i++) 
    if (d[i] == 0) 
      d[i] = -1;
 
  for (int i = 0; i < n; i++) {
    printf("%d %d\n", i + 1, d[i]);
  }

  return 0;
}
