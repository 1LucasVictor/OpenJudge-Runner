#include<stdio.h>
#define SIZE 200000

int main(void)
{
  int i, j, k, cnt, sum;
  int N, M, K;
  int A[SIZE], B[SIZE];
  scanf("%d %d %d", &N, &M ,&K);
  for ( i=0; i<N; ++i)
    scanf("%d", &A[i]);
  for ( j=0; j<M; ++j)
    scanf("%d", &B[j]);
  cnt = 0;
  sum = 0;
  
  for ( k=i=j=0; k<N+M; ++k) {
    if ( A[i] < B[j]) {
      sum += A[i];
      ++i;
    }else{
      sum += B[j];
      ++j;
    }
    if ( sum > K)
      break;
    else
      ++cnt;
  }

  printf("%d\n", cnt);
  return 0;
}