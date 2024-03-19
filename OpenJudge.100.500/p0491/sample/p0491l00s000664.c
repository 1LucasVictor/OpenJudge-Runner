#include <stdio.h>
#include <stdlib.h>

int main(void)
{ long long int n,k,mod;

  scanf("%lld%lld", &n, &k);

  mod=n%k;
   if (mod<k-mod)
    printf("%lld", mod);
   else
    printf("%lld", k-mod);

  return 0;
}
