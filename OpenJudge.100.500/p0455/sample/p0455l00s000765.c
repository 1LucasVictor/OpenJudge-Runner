#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];
double main(void)
{
  int a;
  scanf("%d", &a);
  
  printf("%d", a + a*a + a*a*a);
  return 0;
}