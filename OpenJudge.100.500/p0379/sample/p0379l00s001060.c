#include <stdio.h>
int main () {
  int n, m;
  int i, j;
  int GyuretuA[100][100], VectorB[100], Vector_result[100];
  scanf("%d %d", &n, &m);
  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {
      scanf("%d", &GyuretuA[i][j]);
    }
  }

  for (i=0; i<m; i++) {
    scanf ("%d", &VectorB[i]);
  }
  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {
      Vector_result[i] += GyuretuA[i][j]*VectorB[j];
    }
  }
  for (i=0; i<n; i++) {
    printf("%d\n", Vector_result[i]);
  }

  return 0;
}