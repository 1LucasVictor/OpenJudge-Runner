#include<stdio.h>
#include<assert.h>
#include<math.h>

int main(void)
{
  int H, N, A[1000];
  if(scanf("%d %d", &H, &N) != 2) return 1;
  assert((1 <= H)&&(H <= 1000000000));
  assert((1 <= N)&&(N <= 100000));
  for(int i = 0; i < N; i++)
  {
    if(scanf("%d", &A[i]) != 1) return 1;
    assert((1 <= A[i])&&(A[i] <= 10000));
  }
  for(int i = 0; i < N; i++)
  {
    H -= A[i];
    if(H <= 0)
      break;
  }
  if(H > 0)
    printf("No");
  else
    printf("Yes");
  return 0;
}