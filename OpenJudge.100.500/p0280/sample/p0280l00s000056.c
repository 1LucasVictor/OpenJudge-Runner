#include <stdio.h>
#define N 100
#define INF 2147483647
#define NIL -1

int n, a[N][N];

int Prim(){
  int i, u, r = 0, v, mincost, wa = 0;
  int d[N], pi[N], color[N];
  for(u = 0; u < n; u++){
    d[u] = INF;
    pi[u] = NIL;
    color[u] = 0;
  }
  d[r] = 0;
  while(1){
    mincost = INF;
    for(i = 0; i < n; i++){
      if(color[i] != 2 && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == INF) break;
    
    color[u] = 2;
    
    for(v = 0; v < n; v++){
      if(color[v] != 2 && a[u][v] != INF){
	if(d[v] > a[u][v]){
	  pi[v] = u;
	  d[v] = a[u][v];
	  color[v] = 1;
	}
      }
    }
  }
  for(i = 0; i < n; i++){
    if(pi[i] != NIL){
      wa += a[i][pi[i]];
    }
  }
  
  return wa;
}
  
int main(){
  int i, j;
  int x, aa;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &x);
      if(x == -1){
	a[i][j] = INF;
      }else{
	a[i][j] = x;
      }
    }
  }

  aa = Prim();
      

  printf("%d\n", aa);

  return 0;
}

