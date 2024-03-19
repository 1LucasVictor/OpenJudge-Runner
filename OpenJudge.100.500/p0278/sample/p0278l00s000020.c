#include <stdio.h>

#define N 100     
#define SUCCESS 1 
#define FAILURE 0 
#define INFTY 1 << 21 

int queue[N]; 
int queue_head = 0; 
int queue_num; 

int node_num, M[N][N];
int d[N];

int enqueue(int enq_data)
{
  if (queue_head + queue_num < N) {
    queue[queue_head + queue_num] = enq_data;
    queue_num++;
    return SUCCESS;
  } else {
    return FAILURE;
  }
}

int dequeue(int *deq_data)
{
  if (queue_num > 0) {
    *deq_data = queue[queue_head];
    queue_num--;
    queue_head++;
    return SUCCESS;
  } else {
    return FAILURE;
  }
}

void bfs(int s) {
  enqueue(s); 
  for (int i = 1; i <= node_num; i++) d[i] = INFTY; 
  d[s] = 0; 
  int u, p;
  while(queue_num > 0) {
    u = queue[queue_head];
    dequeue(&p);
    for (int v = 1; v <= node_num; v++) {
        if (M[u][v] == 0) continue;
        if (d[v] != INFTY) continue;
        d[v] = d[u] + 1;
        enqueue(v);
    }
  }
  for (int i = 1; i <= node_num; i++) {
    printf("%d %d\n", i, d[i]);
  }
}

int main(void)
{
  int u, v, k, i, j;
  
  scanf("%d", &node_num);
  for (i = 0; i <= node_num; i++) {
    for(j = 0; j <= node_num; j++) M[i][j] = 0;
  }

  for (i = 0; i < node_num; i++) {
    scanf("%d %d", &u, &k);
    for (j = 0; j < k; j++) {
      scanf("%d", &v);
      M[u][v] = 1;
    }
  }

  bfs(1);
  
  return 0;
}

