#include <stdio.h>
 
#define N 101
#define MAX 2001
#define WHITE 0
#define BLACK 1
#define NIL -1
  
void prim();

int gin[N][N], pi[N], w[N][N];
int n;

int main(){
  int d_sum = 0;
  int i, j;
  
  scanf("%d", &n);
  
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &gin[i][j]);
      w[i][j] = gin[i][j];
    }
  }
  
  prim();
  
  for(i = 0; i < n; i++){
    if(w[i][ pi[i] ] != -1){
      d_sum += w[i][ pi[i] ];
    }
  }
  
  printf("%d\n", d_sum);
  
  return 0;
}

void prim(){
  int mincost, u, v, i;
  int color[n], d[n];
  
  for(u = 0; u < n; u++){
    d[u] = MAX;
    pi[u] = NIL;
    color[u] = WHITE;
  }
   
  d[0] = 0;
   
  while( 1 ){
    mincost = MAX;
    for(i = 0; i < n; i++){
      if(color[i] != BLACK && d[i] < mincost){
    mincost = d[i];
    u = i;
      }
    }
      
    if(mincost == MAX) break;
  
    color[u] = BLACK;
      
    for(v=0; v<n; v++){
      if(color[v] != BLACK && w[u][v] < d[v] && w[u][v] != -1){
	pi[v] = u;
	d[v] = w[u][v];
      }
    }
  }
}