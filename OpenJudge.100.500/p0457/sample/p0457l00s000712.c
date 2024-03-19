#include<stdio.h>
#include<stdlib.h>

int main() {
  int N,M,K;
  long long int *A,*B;
  int i,j;
  long long int input;
  int result;
  scanf("%d %d %d", &N, &M, &K);
  A = (long long int*)malloc(sizeof(long long int)*N+1);
  B = (long long int*)malloc(sizeof(long long int)*M+1);
  A[0] = 0;
  B[0] = 0;
  for ( i = 1; i <= N; i++ ) {
    scanf("%lld", &input);
    A[i] = A[i-1]+input;
  }
  for ( i = 1; i <= M; i++ ) {
    scanf("%lld", &input);
    B[i] = B[i-1]+input;
  }
  
  result = 0;
  for ( i = N; i >= 0; i-- ) {
    // printf("i = %d\n", i);
    for ( j = M; j >= 0; j-- ) {
      // printf("j = %d\n", j);
      if ( A[i] + B[j] <= K ) {
        result = result>(i+j)?result:(i+j);
        // printf("i = %d, j = %d, res = %d\n", i,j,result);
        break;
      }
    }
    if ( j == M ) {
      break;
    }
  }
  
  printf("%d\n", result);

  free(A);
  free(B);
  return 0;
}
