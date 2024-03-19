#include <stdio.h>
#include <stdlib.h>
int main()
{
  long long int n, k;
  scanf("%lld %lld", &n, &k);
  
  long long int mo, kk;
  mo = n%k;
  kk = fabs(mo-k);
  if(mo > kk) printf("%lld", kk);
  else printf("%lld", mo);
  return 0;
}