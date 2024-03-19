#include<stdio.h>
#include<stdlib.h>
int main()
{
  long long int n,k;
  scanf("%lld %lld",&n,&k);
  long long int max = n%k; 
  long long int ans = max>=(k-max)?(k-max):max;
  printf("%lld",ans);
  return 0;
}
