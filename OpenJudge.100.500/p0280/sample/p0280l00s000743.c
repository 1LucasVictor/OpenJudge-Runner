#include<stdio.h>
#define N 101

int main(void){
  int u, v, d, n, a, b, M[N][N], dis=0;
  
  scanf("%d", &n);
  for(u=1; u <= n; u++){
    for(v=1; v <= n; v++){
      scanf("%d", &M[u][v]);  
    }
  }
  
  
  for(u=1; u <= n; u++){
    d = N;
    
    for(v=1; v <= n; v++){
      if(M[u][v] <= d && 0 < M[u][v]){
	d = M[u][v];
	a=v;
      }
    }
    
    for(v=1; v <= n; v++){
      M[v][a] = -1;
    }
    if(d==N)dis+=0;
    else  dis += d;
  }
  
  printf("%d\n", dis);
  
  return 0;
}