/*全域木*/
#include <stdio.h>
#include <stdlib.h>
#define N 101
#define INFTY 1000000000

int prim();

int M[N][N], n;


int prim(){
  int i, j, v, u, minv, sum;
  int d[N], p[N], c[N];
 
  for (i=0; i<n; i++){
    d[i] = INFTY;
    p[i] = -1;
    c[i] = 0;
  }

  d[0] = 0;

  while (1){
    minv = INFTY;
    u = -1;
    for (i=0; i<n; i++){
      if (minv > d[i] && c[i] != 2){
	u = i;
	minv = d[i];
      }
    }
    
    if (u == -1) break;
    c[u] = 2;
    for (v=0; v<n; v++){
      if (c[v] != 2 && M[u][v] != INFTY){
	if (d[v] > M[u][v]) {
	  d[v] = M[u][v];
	  p[v] = u;
	  c[v] = 1;
	}
      }
    }
  }
  sum = 0;
  for (i=0; i<n; i++){
    if (p[i] != -1) sum += M[i][p[i]];
  }
  

  return sum;
}

int main(){
  int i, j;
  
  scanf("%d", &n);
  
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      scanf("%d", &M[i][j]);
      if (M[i][j] == -1){
	M[i][j] = INFTY;
      }
    }
  }
  
  printf("%d\n", prim());

  return 0;
}

