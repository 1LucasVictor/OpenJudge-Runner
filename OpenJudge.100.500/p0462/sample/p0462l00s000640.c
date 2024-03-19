#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

//ABC169D
//ABC169C
int main(void) {
  long long n, k;
  double b;
  scanf("%lld %lf", &n, &b);
  b=b*100;
  k=n*(long long)b;
  printf("%lld", k/100);
  return 0;
}