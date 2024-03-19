#include <stdio.h>

int main(void) {
  int n, m, l;
  scanf("%d %d %d", &n, &m, &l);

  int A[n][m];
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  int B[m][l];
  for (int i=0; i<m; i++) {
    for (int j=0; j<l; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<l; j++) {
      long long sum=0;
      for (int k=0; k<m; k++) {
          sum+=A[i][k]*B[k][j];
      }
      if (j<l-1) {
        printf("%ld ", sum);
      } else {
        printf("%ld\n", sum);
      }
    }
  }
  return 0;
}
