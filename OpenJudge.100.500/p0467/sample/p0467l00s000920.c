#include <stdio.h>

int main(void)
{
  long int a, b, c, k, result = 0;
  
  scanf("%ld %ld %ld %ld", &a, &b, &c, &k);
  
  if( k > a ){
    result += a;
  } else {
      result += k;
  }
  
  k -= (a+b);
  
  if( k <= 0 ){
      printf("%ld\n", result);
      return 0;
  }
  
  result -= k;
  
  printf("%ld\n", result);
  return 0;
  
}