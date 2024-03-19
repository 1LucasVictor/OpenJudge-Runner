#include<stdio.h>

#define MAX 100
#define INF 2000000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, cost[MAX][MAX];

void tani(void);

int main(){
  int i, j, x, a, u;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      cost[i][j] = INF;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d %d", &u, &x);
    for(j = 0; j < x; j++){
      scanf("%d", &a);
      scanf("%d", &cost[u][a]);
    }
  }
  tani();

  return 0;
}

void tani(){
  int i, u, min, v;
  int d[MAX], color[MAX];

  for(int i = 0; i < n; i++){
    d[i] = INF;
    color[i] = WHITE;
  }
  d[0] = 0;
  color[0] = GRAY;

  while(1){
    min = INF;
    u = -1;
    for(i = 0; i < n; i++){
      if(min > d[i] && color[i] != BLACK){
        u = i;
        min = d[i];
      }
    }
    if(u == -1) break;
    color[u] = BLACK;
    for(v = 0; v < n; v++){
      if(color[v] != BLACK && cost[u][v] != INF){
        if(d[v] > d[u] + cost[u][v]){
          d[v] = d[u] + cost[u][v];
          color[v] = GRAY;
        }
      }
    }
  }

  for(i = 0; i < n; i++){
    printf("%d ", i);
    if(d[i] == INF) printf("-1\n");
    else printf("%d\n", d[i]);
  }
}

