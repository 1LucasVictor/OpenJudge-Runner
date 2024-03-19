#include<stdio.h>
#define N 101
#define INF 10000000
#define NIL -1
#define WHITE 1
#define BLACK 2

int main()
{
  int n, i, j, u, v, k, c, mincost=0;
  int G[N][N], d[N], pi[N], color[N];

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      G[i][j] = INF;
    }
  }
  
  for(i = 0; i < n; i++){
    scanf("%d%d", &u, &k);
    for(j = 0; j < k; j++){
      scanf("%d %d", &v, &c);
      G[u][v] = c;
    }
  }

  /* ????????? */
  for(i = 0; i < n; i++){
    d[i] = INF;
    pi[i] = NIL;
    color[i] = WHITE;
  }
  
  d[0] = 0;
  
  /* ????????????????????? */
  while(1){
    mincost = INF;
    for(i = 0; i < n; i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    
    if(mincost == INF) break;
    
    color[u] = BLACK;
    for(i = 0; i < n; i++){
      if(d[i] > d[u] + G[u][i]){
      	d[i] = d[u] + G[u][i];
      	pi[i] = u;
      }
    }
  }

  for(i = 0; i < n; i++){
    printf("%d %d\n", i, d[i]);
  }

  return 0;
}