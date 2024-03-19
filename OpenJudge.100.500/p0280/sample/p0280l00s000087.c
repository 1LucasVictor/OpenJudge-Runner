#include <stdio.h>
#define MAX 100
#define INFTY 2001
#define NIL -1
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,A[MAX][MAX];
int prim(void);

int main(){
  int i,j;

  scanf("%d",&n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      scanf("%d",&A[i][j]);
      if(A[i][j] == -1)
	A[i][j] = INFTY;
    }
  }

  printf("%d\n",prim());

  return 0;
}

int prim(){
  int i,u,v,mincost,sum = 0,d[MAX],pi[MAX],color[MAX];

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
      if(color[v] != BLACK && A[u][v]  != INFTY){
	if(A[u][v] < d[v]){
	  pi[v] = u;
	  d[v] = A[u][v];
	}
      }
    }
  }

  for(i=0; i<n; i++){
    if(pi[i] != NIL)
      sum += A[i][pi[i]];
  }

  return sum;
}