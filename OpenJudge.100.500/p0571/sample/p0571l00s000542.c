#include <stdio.h>

void main ()
{
  int n, a, b;
  
  scanf("%d%d%d", &n, &a, &b);
  n * a >= b ? printf("%d", b) : printf("%d", n * a);
  
}
