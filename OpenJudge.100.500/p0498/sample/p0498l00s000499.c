#include <stdio.h>

int		main(void)
{
  int i;
  
  scanf("%d", &i);
  if (i % 2 == 0)
    printf("%d", i / 2);
  else
    printf("%d", i / 2 + 1);
  return (0);
}