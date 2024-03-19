#include <stdio.h>
#include <ctype.h>

typedef long long ll;

ll n, k;
ll w[100001];

int check(ll P) {
  ll sum = 0, cnt = 0;
  ll i;
  for(i = 0; i < n; i++) {
    if(w[i] > P) return 0;
    sum += w[i];
    if(sum > P) {
      cnt++;
      sum = w[i];
    }
  }
  return cnt < k;
}

int main() {
  ll i;
  
  scanf("%lld %lld", &n, &k);
  for(i = 0; i < n; i++) scanf("%lld", w+i);
  w[n] = 0;
  n++;

  ll lb = 0, ub = 1000000010;
  
  while(lb + 1 < ub) {
    ll mb = (lb+ub) / 2;
    if(check(mb)) ub = mb;
    else lb = mb;
  }

  printf("%d\n", ub);

  return 0;
}