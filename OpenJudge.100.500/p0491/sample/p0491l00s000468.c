#include <stdio.h>

int main()
{
  int n;
  int k;
  int a;
  int b;
  
  scanf("%d %d", &n, &k);
  
  a = n % k;
  b = (a - k) * -1;
  
  if (a < 0)
    a *= -1;
  
  
  
  if (a < b)
    printf("%d",a);
  
  if (a > b)
    printf("%d",b);
  
  return 0;
}