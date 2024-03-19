#include<stdio.h>
int main(){
  int n,m,i,j;
  scanf("%d%d", &n, &m);
  int A[n][m],B[m];
  int C[n];
  int sum,sum1=0;
  for( i = 0; i < n; i++){
    for( j = 0; j < m; j++){
      scanf("%d", &A[i][j]);
    }
  }

  for( i = 0; i < m; i++){
    scanf("%d", &B[i]);
  }

  for( i = 0; i< n; i++){
    for( j = 0; j < m; j++){
      sum = A[i][j] * B[j];
      sum1 += sum;
      sum = 0;
    }
    C[i] = sum1;
    printf("%d\n", C[i]);
    sum1 = 0;
  }

  return 0;
}
 

