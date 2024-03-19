#include<stdio.h>
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
    for(int j = 0; j < N; j++)
    {
      if(i == j)
        continue;
      if(A[i] == A[j])
      {
        flag = 1;
        break;
      }
    }
  if(!flag)
    printf("YES");
  else
    printf("NO");
}