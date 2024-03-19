#include<stdio.h>
#define SIZE 200000

int main(void)
{
  int i, j, cnt, sum;
  int N, M, K;
  int A[SIZE], B[SIZE];
  scanf("%d %d %d", &N, &M ,&K);
  for ( i=0; i<N; ++i)
    scanf("%d", &A[i]);
  for ( j=0; j<M; ++j)
    scanf("%d", &B[j]);
  cnt = 0;
  sum = 0;
  
  for ( i=j=0; i+j<N+M; ++cnt) {
    if ( i < N && j < M) {
      if ( A[i] < B[j]) {
        sum += A[i];
        ++i;
      }else{
        sum += B[j];
        ++j;
      }
    }else if ( i == N) {
      sum += B[j];
      ++j;
    }else if ( j == M) {
      sum += A[i];
      ++i;
    }
    if ( sum > K)
      break;
  }

  printf("%d\n", cnt);
  return 0;
}