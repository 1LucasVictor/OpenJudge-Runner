#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int N;
  int sum[200000];

  scanf("%d", &N);

  for (int i = 0; i < N; i++)
  {
    sum[i] = 0;
  }

  for (int i = 0; i < N - 1; i++)
  {
    int boss;
    scanf("%d", &boss);
    sum[boss - 1]++;
  }

  for (int i = 0; i < N; i++)
  {
    printf("%d\n", sum[i]);
  }

  return 0;
}
