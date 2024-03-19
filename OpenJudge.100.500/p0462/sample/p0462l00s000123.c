#include <stdio.h>

int main()
{
  int i, j;
  long long int a;
  double b;
  scanf("%lld%lf", &a, &b);
  double ans = a * b; 
  printf("%d\n", (int)ans);
  
  return 0;
}