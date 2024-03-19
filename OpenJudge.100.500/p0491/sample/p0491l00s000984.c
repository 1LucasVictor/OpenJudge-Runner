#include <stdio.h>

int main()
{
  long long int n, k;
  
  scanf("%lld%lld", &n, &k);
  
  n = n % k;
  if(n < k - n){
    printf("%lld\n", n);
  }else{
    printf("%lld\n", k - n);
  }
  
  return 0;
}