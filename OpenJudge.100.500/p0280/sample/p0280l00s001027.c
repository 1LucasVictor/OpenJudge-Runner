#include <stdio.h>

#define N 100
#define NIL -1
#define WHITE 0
#define BLACK 1
#define INF 1000000000

void prim(void);

int n, total = 0;
int A[N][N];

int main(){

  int i, j;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      scanf("%d",&A[i][j]);
    }
  }

  prim();

  printf("%d\n", total);

  return 0;
}


void prim(void){

  int u, i, v, mincost;
  int d[N], pi[N], color[N];

  for(u=0; u<n; u++){
    d[u] = INF;
    pi[u] = NIL;
    color[u] = WHITE;
  }

  d[0] = 0;

  while(1){
    mincost = INF;
    for(i=0; i<n; i++){
      if((color[i] != BLACK) && (d[i] < mincost)){
	mincost = d[i];
	u = i;
      }
    }

    if(mincost == INF) break;

    color[u] = BLACK;

    for(v=0; v<n; v++){
      if(A[u][v] != NIL){
	if((color[v] != BLACK) && (A[u][v] < d[v])){
	  pi[v] = u;
	  d[v] = A[u][v];
	  if(A[u][v] <= pi[v]){
	    total += A[u][v];
	  }
	}
      }
    }
  }
}