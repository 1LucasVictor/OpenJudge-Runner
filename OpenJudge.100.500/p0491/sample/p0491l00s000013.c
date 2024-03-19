#include <stdio.h>
int main () {
  long long n, k;
  scanf("%lld%lld",&n,&k);
  n=n%k; 
  if (k-n<n) printf("%lld",k-n);
  else printf("%lld",n);
}