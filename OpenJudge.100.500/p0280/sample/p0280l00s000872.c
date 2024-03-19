#include <stdio.h>

int G[100][100];
int d[100], p[100];
enum status { true, false };
enum status is_visited[100];

void prim() {
  int i, j;
  int u, mincost;

  for(i = 0;i < 100;i++) {
    d[i] = 2001;
    is_visited[i] = false;
  }

  d[0] = 0;
  p[0] = -1;

  while(1) {
    mincost = 2001;
    for(i = 0;i < 100;i++) {
      if(is_visited[i] == false && d[i] < mincost){
        mincost = d[i];
        u = i;
      }
    }

    if(mincost == 2001) break;

    is_visited[u] = true;

    for(i = 0;i < 100;i++) {
      if(G[u][i] != -1 && is_visited[i] == false) {
        if(G[u][i] < d[i]) {
          d[i] = G[u][i];
          p[i] = u;
        }
      }
    }
  }
}

int main() {
  int i, j, n;
  int sum = 0;

  for(i = 0;i < 100;i++)
    for(j = 0;j < 100;j++)
      G[i][j] = -1;

  scanf("%d", &n);
  for(i = 0;i < n;i++)
    for(j = 0;j < n;j++)
      scanf("%d", &G[i][j]);

  prim();
  for(i = n - 1;i > 0;i--)
    sum += G[i][p[i]];

  printf("%d\n", sum);

  return 0;
}

