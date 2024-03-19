#include<stdio.h>
int main() {
  int i, n, j, sum=0;
  scanf("%d", &n);
  int A[n][n], min[n-1];
  for(i = 0; i < 4; i++) {
    min[i] = 99;
  }
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }
  for(i = 0; i < n; i++) {
    for(j = 1; j < n; j++) {
      if(A[i][j] != -1) {
	if(min[j-1] > A[i][j]) min[j-1] = A[i][j];
      }
    }
  }
  for(i = 0; i < n-1; i++) {
    sum += min[i];
  }
  printf("%d\n", sum);
  return 0;
}