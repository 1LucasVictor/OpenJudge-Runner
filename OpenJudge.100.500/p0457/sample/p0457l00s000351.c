#include<stdio.h>
#define SIZE 200000
int main(void)
{
  int i, j, k, max;
  int N, M, limit;
  int A[SIZE], B[SIZE];
  long long sum;
  
  scanf("%d %d %d", &N, &M, &limit);
  for ( k=0; k<N; ++k)
    scanf("%d", &A[k]);
  for ( k=0; k<M; ++k)
    scanf("%d", &B[k]);
  max = 0;
  
  for ( i=1; i<=N; ++i) {
    for ( j=1; j<=M; ++j) {
      sum = 0;
      for ( k=0; k<i; ++k)
        sum += A[k];
      for ( k=0; k<j; ++k)
        sum += B[k];
      if ( sum <= limit && max < i+j)
        max = i+j;
    }
  }
  
  printf("%d\n", max);
  return 0;
}