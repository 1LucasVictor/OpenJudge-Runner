#include <stdio.h>
#include <stdio.h>
int main()
{
  long long int n, k;
  scanf("%lld %lld", &n, &k);
  
  long long int mo, kk;
  mo = n%k;
  kk = abs(mo-k);
  if(mo > kk) printf("%lld", kk);
  else printf("%lld", mo);
  return 0;
}