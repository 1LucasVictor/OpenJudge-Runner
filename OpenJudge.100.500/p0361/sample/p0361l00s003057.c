#include <stdio.h>
#include <stdlib.h>

int main()
{
  int S = 0;
  scanf("%d", &S);
  printf("%d:%d:%d\n", S/3600, (S%3600)/60, (S%3600)%60);

  return 0;
}

