#include <stdio.h>

int main(void)
{
  int D, N;
  int ten[3] = {1, 100, 10000};
  scanf("%d%d", &D, &N);
  printf("%d\n", N*ten[D]);
}