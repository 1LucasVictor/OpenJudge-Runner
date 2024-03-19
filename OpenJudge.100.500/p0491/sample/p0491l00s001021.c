#include<stdio.h>

int main(void){
  long long n , k;
  scanf("%lld %lld",&n ,&k);

  long long ans = n%k;
  if(n%k > k - n%k){
    ans = k - n%k;
  }

  printf("%lld\n",ans);

  return 0;
}