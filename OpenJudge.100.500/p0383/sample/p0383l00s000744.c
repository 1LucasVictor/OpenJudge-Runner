#include <stdio.h>

int A[100][100];
int B[100][100];

int main(){
  int n, m, l, x;
  int i, j, k, c=0;
  
  scanf("%d%d%d", &n, &m, &l);
  
  for(i=0; i<n; i++)//scan array A
    for(j=0; j<m; j++){
      scanf("%d", &x);
      A[i][j] = x;
    }
  for(i=0; i<m; i++)//scan array B
    for(j=0; j<l; j++){
      scanf("%d", &x);
      B[i][j] = x;
    }

  for(i=0; i<n; i++){//cal & print
    for(k=0; k<l; k++){
      c = 0;
      for(j=0; j<m; j++)
	c += A[i][j] * B[j][k];
      printf("%d%c", c, (k == l-1 ? '\n' : ' '));
    }
  }
  
  return 0;
}