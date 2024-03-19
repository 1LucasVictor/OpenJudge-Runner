#include <stdio.h>
#include <math.h>

int main(void)
{
  long int a, b, c, i, k, result = 0;
  
  scanf("%ld %ld %ld %ld", &a, &b, &c, &k);
  


      result += 1 * a;
      k -= a;
      if( k == 0 ){
          printf("%ld\n", result);
          return 0;
      }

  k -= b;
  
  if( k <= 0 ){
      printf("%ld\n", result);
          return 0;
  }
  

      result += (-1 * k);

          printf("%ld\n", result);
          return 0;

  

}