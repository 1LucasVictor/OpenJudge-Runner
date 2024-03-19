#include<stdio.h>

int main()
{
  long a, b, c, k;
  scanf("%ld %ld %ld %ld", &a, &b, &c, &k);
  
  // k <= a + b + c
  // k - (a + b) <= c
  long minC = 0;
  if (a + b < k) {
    minC = k - (a + b);
  }
  
  printf("%ld\n", a - minC);
  
  return 0;
}