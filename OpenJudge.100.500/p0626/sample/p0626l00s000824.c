#include<stdio.h>

int main(void)
{
  int D, N;
  scanf("%d %d", &D, &N);
  if(D == 0)
  {
    printf("%d\n", N);
  }else if(D == 1)
  {
    printf("%d\n", N * 100);
  }else if(D == 2)
  {
    printf("%d\n", N * 10000);
  }
  return 0;
}
