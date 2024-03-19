#include <stdio.h>

#define N 100

int main()
{
  int i, j;
  int n, u, k, v;
  int Adj[N][N];

  scanf("%d", &n);

  for( i = 0 ; i < n ; i++ )
    for( j = 0 ; j < n ; j++ )
      Adj[i][j] = 0;

  for( i = 0 ; i < n ; i++ ){
    scanf("%d%d", &u, &k);
    u--;
    for( j = 0 ; j < k ; j++ ){
      scanf("%d", &v);
      v--;
      Adj[u][v] = 1;
    }
  }

  for( i = 0 ; i < n ; i++ ){
    for( j = 0 ; j < n ; j++ ){
      if( j > 0 ) printf(" ");
      printf("%d", Adj[i][j]);
    }
    printf("\n");
  }

  return 0;
}