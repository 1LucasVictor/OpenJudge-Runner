#include <stdio.h>
#define MAX 100
#define INFTY 1000000
#define NIL -1
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,A[MAX][MAX];
void dijkstra();

int main(){
  int i,j,k,u,v;

  scanf("%d",&n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      A[i][j] = INFTY;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d",&u);
    scanf("%d",&k);
    for(j=0; j<k; j++){
      scanf("%d",&v);
      scanf("%d",&A[u][v]);
    }
  }
  dijkstra();
  return 0;
}

void dijkstra(){
  int i,u,v,mincost,d[MAX],pi[MAX],color[MAX];

  for(i=0; i<n; i++){
    d[i] = INFTY;
    pi[i] = NIL;
    color[i] = WHITE;
  }

  d[0] = 0;

  while(1){
    mincost = INFTY;
    for(i=0; i<n; i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == INFTY)
      break;
    color[u] = BLACK;
    for(v=0; v<n; v++){
      if(color[v] != BLACK && d[u] + A[u][v] < d[v]){
	pi[v] = u;
	d[v] = A[u][v] + d[u];
      }
    }
  }

  for(i=0; i<n; i++)
    printf("%d %d\n",i,d[i]);
}