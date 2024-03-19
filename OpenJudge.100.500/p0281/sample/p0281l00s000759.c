#include <stdio.h>
#define N 100
#define INF 2147483647
#define NIL -1

int n, d[N], color[N], pi[N], w[N][N];

void initializeSingleSource(int s){
  int v;
  for(v = 0; v < n; v++){
    d[v] = INF;
    color[v] = 0;
  }
  d[s] = 0;
  color[s] = 1;
}

void dijkstra(int s){
  int mincost, u, v, i;
  initializeSingleSource(s);
  while(1){
    mincost = INF;
    for(i = 0; i < n; i++){
      if(color[i] != 2 && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == INF) break;
    color[u] = 2;
    for(v = 0; v < n; v++){
      if(color[v] != 2 && d[u] + w[u][v] < d[v] && w[u][v] != INF){
	color[v] = 1;
	d[v] = d[u] + w[u][v];
      }
    }
  }
}

int main(){
  int i, j, u, k, c, v;
  int s = 0;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      w[i][j] = INF;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d%d", &u, &k);
    for(j = 0; j < k; j++){
      scanf("%d%d", &v, &c);
      w[u][v] = c;
    }
  }

  dijkstra(s);
  for(i = 0; i < n; i++){
    printf("%d ", i);
    if(d[i] == INF){
      printf("-1\n");
    }else{
      printf("%d\n", d[i]);
    }
  }

  return 0;
}

