#include <stdio.h>

int main(void)
{
  int na, nb;

  scanf("%d %d", &na, &nb);
  if (nb % na == 0) printf("%d\n", na + nb);
  else printf("%d\n", nb - na);
  
}