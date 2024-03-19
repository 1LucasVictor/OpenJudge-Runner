#include <stdio.h>
#include <math.h>
int main(void)
{
  unsigned long n,d;
  double p,q;
  int count = 0;
  scanf("%lu%lu", &n, &d);
  for(int i=0; i<n; ++i) {
    unsigned long p, q;
    scanf("%lu%lu", &p, &q);
    p = p*p;
    q = q*q;
    count += (sqrt(p+q) <= d) ? 1 : 0;
  }
  printf("%d\n", count);
  return 0;
}
