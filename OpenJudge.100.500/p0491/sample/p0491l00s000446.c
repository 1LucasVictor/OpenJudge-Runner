#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long

int main(){
  ll n,k;
  scanf("%lld%lld",&n,&k);
  ll ans = n%k;
  if(ans > k-ans) ans=k-ans;

  printf("%lld\n",ans);

  return 0;
}
