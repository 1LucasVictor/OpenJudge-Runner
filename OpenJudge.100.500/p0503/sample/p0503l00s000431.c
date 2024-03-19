#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main(void)
{
  int N, A[200000];
  int flag = 0;
  scanf("%d", &N);
  assert((2 <= N)&&(N <= 200000));
  for(int i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
    assert((1 <= A[i])&&(A[i] <= 1000000000));
  }
  for(int i = 0; i < N; i++)
    for(int j = N; j > i; j--)
      if(A[j] > A[j - 1])
      {
        int stash = A[j - 1];
        A[j - 1] = A[j];
        A[j] = stash;
      }
  for(int i = 1; i < N; i++)
    if(A[i] == A[i - 1])
      flag = 1;
  if(!flag)
    printf("YES");
  else
    printf("NO");
}