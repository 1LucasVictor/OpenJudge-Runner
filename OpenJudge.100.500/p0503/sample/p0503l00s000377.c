#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int N, i, j;
  int judge = 0;
  int A[200001];
  
  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
  }
  
  for (i = 0; i < N - 1; i++)
  {
    for (j = i + 1; j < N; j++)
    {
      if (A[i] == A[j])
      {
        judge = 1;
        break;
      }
    }
  }
  
  if (judge == 0)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  
  return 0;
}