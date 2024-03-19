#include <stdio.h>
#include <math.h>

int main(void)
{
  long double a, b;
  long int result = 0;
  
  scanf("%Lf %Lf", &a, &b);
  
  result = a * b;

  printf("%ld\n", result);
  return 0;
}