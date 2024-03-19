#include <stdio.h>
#include <string.h>

#define ll long long

ll min(ll a, ll b){
  if(a < b)
    return a;
  return b;
}

void solve(){
  char s[100007];
  scanf("%s", s);
  ll zero = 0, one = 0;
  for(ll i=0; i<strlen(s); ++i){
    if(s[i] == '1')
      ++one;
    else
      ++zero;
  }
  ll ans = min(zero, one);
  ans <<= 1;
  printf("%lld\n", ans);
}

int main(){
  solve();
  return 0;
}
