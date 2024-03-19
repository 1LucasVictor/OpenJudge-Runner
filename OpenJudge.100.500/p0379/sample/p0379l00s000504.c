#include <stdio.h>

int main(void)
{
  int n, m;
  int i, j;

/******************input*****************/

  scanf("\n%d %d",&n, &m);
  int M[n][m];/*matrix*/
  for(i=0; i<n; i++) {
    for(j=0; j<m; j++) {
      scanf("%d", &M[i][j]);
    }
  }
  int V[m];/*vector*/
  for(j=0; j<m; j++) {
    scanf("%d", &V[j]);
  }

/******************output****************/

  int R[n];/*result*/
  for(i=0; i<n; i++) {
    R[i]=0;
    for(j=0; j<m; j++) {
      R[i]=R[i]+M[i][j]*V[j];
    }
    printf("%d\n", R[i]);
  }

  return 0;

}