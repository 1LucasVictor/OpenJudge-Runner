#include <stdio.h>

int main()
{
  int A[101][101];
  int n, i, j, u, k, a;
  scanf("%d",&n);
  for(i=0 ; i<=n ; i++ )
    for(j=0 ; j<=n ; j++ )
      A[i][j] = 0;
  
  for(i=1 ; i<=n ; i++ ){
    scanf("%d",&u);
    scanf("%d",&k);
    for(j=1 ; j<=k ; j++ ){
      scanf("%d",&a);
      A[u][a] = 1;
    }
  }

  for(i=1 ; i<=n ; i++ ){
    for(j=1 ; j<=n ; j++ ){
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  return 0;
}