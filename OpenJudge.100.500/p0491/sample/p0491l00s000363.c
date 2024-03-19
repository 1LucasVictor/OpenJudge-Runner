#include <stdio.h>
#include <stdlib.h>
int main()
{
  long int n;
  long int k;

  scanf("%ld", &n);
  scanf("%ld", &k);

  long int a = n % k;
  long int b = k - a;

  if (a > b)
  {
    printf("%ld", b);
  }
  else
  {
    printf("%ld\n", a);
  }
}