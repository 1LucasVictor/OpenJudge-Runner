#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long get(long long n,long long k){
  long long ans1,ans2;
  int q,r;

  if(k == 0) return n;

  q = n % k;
  if(q == 0) return 0;

  r = n/k;

  ans1 = (long long)abs(n - r*k);
  ans2 = (long long)abs(ans1 - k);

  if(ans1 < ans2) return ans1;

  else return ans2;
}

int main(){
  long long n,k;

  scanf("%lld %lld", &n, &k);

  printf("%lld\n", get(n,k));

  return 0;
}