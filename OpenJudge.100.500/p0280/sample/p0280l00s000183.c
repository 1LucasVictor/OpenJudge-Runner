#include <stdio.h>

#define INF 10000000
#define NIL -1
#define BLACK 1
#define WHITE 0
#define MAX 101

int n,a[MAX][MAX],d[MAX],pi[MAX],color[MAX];
int w = 0;

void prim(void){

  int mincost,u,v,i;
 
  for( i = 0; i < n; i++){ 
    d[i] = INF;
    pi[i] = NIL;
    color[i] = WHITE;
  }
 
  d[0] = WHITE;
 
  while(1){
    mincost = INF;
    for( i = 0; i < n; i++){ 
      if (color[i] != BLACK && d[i] < mincost){
    mincost = d[i];
    u = i;
      }
    }
    color[u] = BLACK;
 
    if(mincost == INF) break;
 
    for( v = 0; v < n; v++){
      if(a[u][v] != -1){
    if (color[v] != BLACK && a[u][v] < d[v]){
      pi[v] = u;
      d[v] = a[u][v];
    }
      }
    }
  }
}

int main(void){

	int i,j;

	scanf("%d",&n);

	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			scanf("%d",&a[i][j]);
		}
	}

	prim();

	for( i = 0; i < n; i++){
		if(pi[i] != NIL && a[pi[i]][j] != 1){
			w += a[pi[i]][i];
		}  
	}

	printf("%d\n",w);

	return 0;
}