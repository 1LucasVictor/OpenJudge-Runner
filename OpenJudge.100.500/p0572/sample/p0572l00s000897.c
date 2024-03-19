#include <stdio.h>
typedef long long ll;
#define mod 2019

int main(void){
  ll L, R;
  ll l,r;
  int ans;

  scanf("%lld %lld", &L,&R);

  l=L%mod;
  r=R%mod;
  if(R-L==1){
    ans=(l*r)%mod;
  }else if(R-L+1>=mod){
    ans=2;
  }else{
    if(l<r){
      ans=(l*(l+1))%mod;
    }else{
      ans=0;
    }
  }

  printf("%d\n", ans);

  return 0;
}
