#include <stdio.h>
int main()
{
  long long int result;
  long long int A;
  double B;
  scanf("%lld %lf", &A, &B);
  
  result = (long long int)(A * B);
  printf("%lld", result);
  return 0;
}