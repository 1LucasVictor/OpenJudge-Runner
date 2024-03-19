#include<stdio.h>

int main()
{
  int N, i, boss;
  int num[200000] = {0};

  scanf("%d", &N);
  
  for(i = 1; i < N; i++)
  {
    scanf("%d", &boss);
    num[boss - 1] += 1;
  }

  for(i = 0; i < N; i++)
  {
    printf("%d\n", num[i]);
  }

  return 0;
}