#include <stdio.h>

int main(void)
{
  int A[101], c = 0, flag, i, j, N, t;
  scanf("%d",&N);
  for(i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
  }
  while(flag)
  {
    flag = 0;
    for(j = N - 1; j > 0; j--)
    {
      if(A[j] < A[j - 1])
      {
        t = A[j];
        A[j] = A[j - 1];
        A[j - 1] = t;
        flag = 1;
        c++;
      }
    }
  }
  for(i = 0; i < N - 1; i++)
  {
    printf("%d ", A[i]);
  }
  printf("%d\n",A[i]);
  printf("%d\n",c);
  return 0;
}