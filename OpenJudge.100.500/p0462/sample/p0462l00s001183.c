#include <stdio.h>

int main(void) {
  long double a,b;
  scanf("%Lf %Lf",&a,&b);
  long long int p=a*b;
  printf("%lld\n",p);
  return 0;
}