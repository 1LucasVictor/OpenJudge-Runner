#include <stdio.h>

#define MAX 100

int main(void) {
  int A[MAX][MAX];
  int B[MAX][MAX];
  unsigned long C[MAX][MAX];

  int i, j, k;
  int n, m, l;
  scanf("%d %d %d", &n, &m, &l);

  for(i=0; i<n; ++i) {
    for(j=0; j<m; ++j) {
      scanf("%d", &A[i][j]);
    }
  }

  for(i=0; i<m; ++i) {
    for(j=0; j<l; ++j) {
      scanf("%d", &B[i][j]);
    }
  }

  for(i=0; i<n; ++i) {
    for(j=0; j<l; ++j) {
      for(k=0; k<m; ++k) {
        C[i][j] += A[i][k] * B[k][j];
      }
      if(j != l-1) printf("%lu ", C[i][j]);
      else printf("%lu", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}

