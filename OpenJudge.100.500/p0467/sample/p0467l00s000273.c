#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  
  int a, b, c, k;
  
  scanf("%d %d %d %d", &a, &b, &c, &k);
  
  if (k <= a) printf("%d\n", k);
  else if (a < k && k <= a+b) printf("%d\n", a);
  else if (a+b < k) printf("%d\n", 2*a+b-k);
  
  return 0;
}