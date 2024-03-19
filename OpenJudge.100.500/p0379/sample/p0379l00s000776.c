#include <stdio.h>

int main() {

  int i, j, m, n;
  int matrix[100][100];
  int vec[100], c[100]={};

  scanf("%d %d", &m, &n);
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      scanf("%d", &matrix[i][j]);
    }
  }
  for (i = 0; i < n; i++){
    scanf("%d", &vec[i]);
  }
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      c[i] += matrix[i][j] * vec[j];
    }
  }
  for (i = 0; i < m; i++){
    printf("%d\n", c[i]);
  }

  return 0;

}