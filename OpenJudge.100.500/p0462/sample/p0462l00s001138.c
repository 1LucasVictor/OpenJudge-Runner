#include <stdio.h>

int main(void){

  long long a;
 long double b;
  scanf("%lld %Lf", &a, &b);
  long c = a*b;
  printf("%ld\n", c);

  return 0;
}