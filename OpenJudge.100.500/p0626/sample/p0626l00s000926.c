#include <stdio.h>

int main()
{
  int d, n, i;
  scanf("%d %d", &d, &n);
  if(n == 100) { ++n; }
  for(i = 0; i < d; ++i){ n *= 100; }
  printf("%d\n", n);
  return 0;
}