
#include <stdio.h>
#include <limits.h>

#define WHITE 1
#define BLACK 2
#define NIL -2

int A[101][101], pi[101], w[101][101], n;

prim(){
  int mincost, u, v, i;
  int color[n], d[n];

  for(u=0; u<n; u++){
    d[u] = INT_MAX;
    pi[u] = NIL;
    color[u] = WHITE;
  }

  d[0] = 0;

  while(1){
    mincost = INT_MAX;
    for(i=0; i<n; i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    
    if(mincost == INT_MAX){
      break;
    }

    color[u] = BLACK;
    
    for(v=0; v<n; v++){
      if(color[v] != BLACK && w[u][v] < d[v] && w[u][v] != -1){
	pi[v] = u;
	d[v] = w[u][v];
      }
    }

  }

}  

  
int main(){
  int i, j, sum=0;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      scanf("%d", &A[i][j]);
      w[i][j] = A[i][j];
    }
  }

  prim();

  for(i=0; i<n; i++){
    if(w[i][pi[i]] != -1){
      sum += w[i][pi[i]];
    }
  }

  printf("%d\n", sum); 

  return 0;
}