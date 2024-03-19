#include <stdio.h>

int main(){
  int i,j,k,n,m,l;

  scanf("%d %d %d",&n,&m,&l);
  
  int A[n][m],B[m][l],C[n][l];

  for(i=0; i<n; i++)//A
    for(j=0; j<m; j++)
      scanf("%d",&A[i][j]);

  for(i=0; i<m; i++)//B
    for(j=0; j<l; j++)
      scanf("%d",&B[i][j]);

  for(i=0; i<n; i++)
    for(j=0; j<l; j++)
      C[i][j] = 0;

  /*Cを計算*/
  for(i=0; i<n; i++)
    for(j=0; j<l; j++)
      for(k=0; k<m; k++)
	C[i][j] += A[i][k] * B[k][j];

  for(i=0; i<n; i++){
    for(j=0; j<l; j++){
      if(j==0) printf("%d",C[i][j]);
      else printf(" %d",C[i][j]);
    }
    printf("\n");
  }

  return 0;
}