#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100
#define INFTY INT_MAX
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[MAX][MAX];
int prim();
int main(){
  int i,j;
  int e;
  scanf("%d",&n);
  if(n < 1 || n > 100)
    exit(1);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d",&e);
      if(e == -1)
	M[i][j] = INFTY;
      else
	M[i][j] = e;
    }
  }

  printf("%d\n",prim());

  return 0;
}

int prim(){
  int i, j;
  int u, minv, sum = 0;
  int d[MAX], p[MAX], color[MAX];

  for(i = 0; i < n; i++){
    d[i] = INFTY;
    p[i] = -1;
    color[i] = WHITE;
  }

  d[0] = 0;

  while(1){
    minv = INFTY;
    u = -1;
    
    for(i = 0; i < n; i++){
      if(minv > d[i] && color[i] != BLACK){
	u = i;
	minv = d[i];
      }
    }
    
    if(u == -1)
      break;
    
    color[u] = BLACK;
    
    for(j = 0; j< n; j++){
      if(color[j] != BLACK && M[u][j] != INFTY){
	if(d[j] > M[u][j]){
	  d[j] = M[u][j];
	  p[j] = u;
	  color[j] = GRAY;
	}
      }
    }    
  }

  for(i = 0; i < n; i++){
    if(p[i] != -1)
      sum += M[i][p[i]];
  }

  return sum;  
}

