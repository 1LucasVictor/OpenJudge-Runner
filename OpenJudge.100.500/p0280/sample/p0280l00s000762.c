#include <stdio.h>

#define N 100
#define MAX_COST 2001

void prim(int);

int graph[N][N], seen[N], cost=0       ;

int main(){
  int n, a, b;
  scanf("%d",&n);
  for(a = 0; a < n; a++){
    for(b = 0; b < n; b++){
      scanf("%d",&graph[a][b]);
    }
    seen[a] = 0;
  }
 
  prim(n);
  printf("%d\n",cost);
  return 0;
}

void prim(int n){
  int a, b, mincost=MAX_COST, x, y;
  y = n-1;
  seen[0] = 2;
  while(1){
    mincost = MAX_COST;
    for(a = 0; a < n; a++){
      if(seen[a] != 2) continue;
      for(b = 0; b < n; b++){
	if(graph[a][b] != -1 && seen[b] != 2){
	  if(mincost > graph[a][b]){
	    mincost = graph[a][b];
	    x = b;
	  }
	}
      }
    }
    cost += mincost;
    seen[x] = 2;
    y--;
    if(y == 0) break;
  }
  
}

