#include <stdio.h>

main() {
  int n, i, j;
  int v[100];
  int matrix[100][100];
  for(i = 0; i < 100; i++) {
    for(j = 0; j < 100; j++) {
      matrix[i][j] = 0;
    }
  }
  scanf("%d", &n);
  
  for(i = 0; i < n; i++) {
    scanf("%d %d", &v[0], &v[1]);
    for(j = 2; j < v[1] + 2; j++) {
      scanf("%d", &v[j]);
      matrix[i][v[j] - 1] = 1;
    }
  }
  
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      if(j == n - 1) {
	printf("%d\n", matrix[i][j]);
      }
      else {
	printf("%d ", matrix[i][j]);   
      }
    }
  }
  return 0;
}