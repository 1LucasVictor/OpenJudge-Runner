#include<stdio.h>
#include<stdlib.h>

int main(){
  int n, u, k, temp;
  int i, j;
  int Adj[101][101];

  scanf("%d", &n);
  if(n < 1 || 100 < n)
    exit(1);

  for(i = 0; i < n; i++){
    scanf("%d %d", &u, &k);
    for(j = 1; j <= k; j++){
      scanf("%d", &temp);
      Adj[u][temp] = 1;
    }
  }

  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      if(j == n)
	printf("%d\n", Adj[i][j]);
      else
	printf("%d ", Adj[i][j]);
    }
  }

  return 0;
}