#include <stdio.h>
int main() {
  int i, j, n, m, count=0 ;
  scanf("%d", &n);
  int A[n];
  for(i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  scanf("%d", &m);
  int B[m];
  for(i = 0; i < m; i++) {
    scanf("%d", &B[i]);
  }
  for(i = 0; i < n; i++) {
    for(j = 0; j < m; j++) {
      if(A[i] == B[j]) count++;
    }
  }
  printf("%d", count);
  return 0;
}