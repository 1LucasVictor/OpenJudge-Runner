#include <stdio.h>
#define MAX 100

int main(){
  int n, i, j, u, adj, num;

  scanf("%d", &n);

  int ans[n+1][n+1];

  for( i=0; i<n+1; i++){
    for( j=0; j<n+1; j++){
      ans[i][j] = 0;
    }
  }

  for( i=0; i<n; i++){
    scanf("%d %d", &u, &adj);
    if( adj == 0 )continue;

    for( j=0; j<adj; j++){
      scanf("%d", &num);
      ans[u][num] = 1;
    }
 }

  for( i=1; i<n+1; i++){
    for( j=1; j<n; j++){
      printf("%d ", ans[i][j]);
    }
    printf("%d\n", ans[i][j]);
  }

  return 0;
}