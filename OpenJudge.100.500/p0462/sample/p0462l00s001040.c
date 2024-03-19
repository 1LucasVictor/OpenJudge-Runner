#include <stdio.h>

int main()
{
  long int a,ans;
  double b;
  
  scanf("%ld", &a);
  scanf("%lf", &b);
  
  ans = a * b;
  printf("%ld", ans);
  
  return(0);
}