#include<stdio.h>
#include<assert.h>
#include<math.h>

int main(void)
{
  int H, N, A[1000];
  scanf("%d %d", &H, &N);
  assert((1 <= H)&&(H <= 1000000000));
  assert((1 <= N)&&(N <= 100000));
  for(int i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
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