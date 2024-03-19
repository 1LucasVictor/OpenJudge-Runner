#include<stdio.h>

int main(){
  int n, i, j, u, k, v, Adj[101][101];
  
  scanf("%d", &n);

  for(i = 1; i < n + 1; i++){
    for(j = 1; j < n + 1; j++)
      Adj[i][j] = 0;
  }
  
  for(i = 1; i < n + 1; i++){
    scanf("%d%d", &u, &k);
    for(j = 0; j < k; j++){
      scanf("%d", &v);
      Adj[i][v] = 1;
    }
  }
  
  for(i = 1; i < n + 1; i++){
    for(j = 1; j < n + 1; j++){
      if(j == n)
	printf("%d\n", Adj[i][j]);
      else
	printf("%d ", Adj[i][j]);
    }
  }

  return 0;
}

