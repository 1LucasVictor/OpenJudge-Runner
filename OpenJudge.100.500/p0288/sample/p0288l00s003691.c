#include<stdio.h>
int main() {
  int i, j, n, N, kawari;
  scanf("%d", &N);
  int A[N];
  for(i = 0; i < N; i++) {
    scanf("%d", &A[i]);
    printf("%d ", A[i]);
  }
  printf("\n");
  for(i = 1; i < N; i++) {
    n = i;
    while(n > 0) {
      j = n-1;
      if(A[n] < A[j]) {
	kawari = A[j];
	A[j] = A[n];
	A[n] = kawari;
	n--;
      }
      else break;
    }
    for(n = 0; n < N; n++) {
      printf("%d ", A[n]);
    }
    printf("\n");
  }
  return 0;
}