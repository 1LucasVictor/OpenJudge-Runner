// Graph
#include <stdio.h>

#define MAX 101

int main(){
  int i, j, n, k, row, col, Adj[MAX][MAX];
  scanf("%d", &n);
  
  for(i=1; i <= n; i++){
    for(j=1; j <= n; j++){
      Adj[i][j] = 0;
    }
  }
  
  for(i=1; i <= n; i++){
    scanf("%d%d", &row, &k);
    for(j=1; j <= k; j++){
      scanf("%d", &col);
      Adj[row][col] = col;
    }
  }
  
  for(i=1; i <= n; i++){
    for(j=1; j <= n; j++){
      if(j != 1)printf(" ");
      if(Adj[i][j] != 0)printf("1");
      else printf("0");
    }
    printf("\n");
  }
  return 0;
}

