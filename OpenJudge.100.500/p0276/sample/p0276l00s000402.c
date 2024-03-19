#include <stdio.h>

#define N 100

typedef struct{
  int u;
  int v[N];
  int k;
}Graph;

int main(){

  int n, i, j, u, l;
  int A[N][N];
  Graph Adj[N];

  scanf("%d", &n);

  for(i=1; i<=n; i++){
    for(j=1; j<=n; j++){
      A[i][j] = 0;
    }
  }
  
  for(i=1; i<=n; i++){
    scanf("%d%d", &Adj[i].u, &Adj[i].k);
    for(j=1; j<=Adj[i].k; j++){
      scanf("%d", &Adj[i].v[j]);
    }
  }

  for(i=1; i<=n; i++){
    for(l=1; l<=Adj[i].k; l++){
      for(j=1; j<=n; j++){
	if(Adj[i].v[l] == j) A[i][j] = 1;
      }
    }
  }

  /*for(i=1; i<=n; i++){
    for(j=1; j<=n; j++){
      if((i != n) && (j ) printf("%d ", A[i][j]);
      else printf("%d\n", A[i][j]);
    }
    }*/

  for(i=1; i<=n; i++){
    for(j=1; j<n; j++){
      printf("%d ", A[i][j]);
    }
    printf("%d\n", A[i][j]);
  }

  return 0;
}