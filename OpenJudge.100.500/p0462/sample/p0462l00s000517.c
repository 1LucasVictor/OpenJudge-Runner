#include <stdio.h>

int main (void)
{
  long double a,b;
  scanf("%Lf %Lf", &a, &b);
  long double sum = a * b;
  printf("%.0Lf", sum-0.5);
  return 0;
}
