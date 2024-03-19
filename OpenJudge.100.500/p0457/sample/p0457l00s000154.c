#include<stdio.h>
#define SIZE 200000

int main(void)
{
  int i, j, k, max, sum;
  int N, M, K;
  int A[SIZE], B[SIZE];
  scanf("%d %d %d", &N, &M ,&K);
  for ( i=0; i<N; ++i)
    scanf("%d", &A[i]);
  for ( j=0; j<M; ++j)
    scanf("%d", &B[j]);
  max = 0;
  
  for ( i=1; i<=N; ++i) {
    for ( j=1; j<=M; ++j) {
      sum = 0;
      for ( k=0; k<i; ++k)
        sum += A[k];
      for ( k=0; k<j; ++k)
        sum += B[k];
      if ( sum <= K && i+j>max)
        max = i+j;
    }
  }

  printf("%d\n", max);
  return 0;
}