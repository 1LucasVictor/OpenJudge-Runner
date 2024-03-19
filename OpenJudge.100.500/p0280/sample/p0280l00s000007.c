#include <stdio.h>
#include <string.h>
#include <limits.h>

#define WHITE 0
#define BLACK 1
#define NIL -1


int prim(int);


int w[101][101];

int main(){
  int n, sum;
  int i, j;
  
  scanf("%d", &n);

  for(i =  1; i <= n; i++){
    for(j = 1; j <= n; j++){
      scanf("%d", &w[i][j]);
    }
  }
  
  sum = prim(n);

  printf("%d\n", sum);
  
  return 0;
}

int prim(int n){
  int d[101];
  int pi[101];
  int color[101];
  int mincost, sum = 0;
  int u, v, i;
  
  for(u = 1; u <= n; u++){
    d[u] = INT_MAX;
    pi[u] = NIL;
    color[u] = WHITE;
  }

  d[1] = 0;

  while(1){
    mincost = INT_MAX;

    for(i = 1; i <= n; i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }

    if(mincost == INT_MAX) break;

    color[u] = BLACK;

    for(v = 1; v <= n; v++){
      if(color[v] != BLACK && -1 < w[u][v] && w[u][v] < d[v]){
	pi[v] = u;
	d[v] = w[u][v];
      }
    }
  }

  for(i = 1; i <= n; i++) sum = sum + d[i];

  return sum;
}

