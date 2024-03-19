#include <stdio.h>
#include <math.h>

void main()
{
 long long int n, k, r=0;
  scanf("%lld%lld", &n, &k);
  if(n<k)
    printf("%lld", n);
  else if(n%k==0)
    printf("%lld", 0);
  else 
    printf("%lld", n/k);
}
