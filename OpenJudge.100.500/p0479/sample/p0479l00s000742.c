#include <stdio.h>
#include <math.h>

int main(){
  int N;
  scanf("%d", &N);
  int A[N], B[N];
  int i, sum = 0;
  A[N] = 0;
  for (i = 0; i < N; i++) {
    B[i] = 0;
  }
  
  for (i = 1; i < N; i++) {
    A[i] = 0;
    scanf("%d", &A[i]);
    B[A[i] - 1] += 1;
  }
  
  for (i = 0; i < N; i++) {
    printf("%d\n", B[i]);
  }
  return 0;
}