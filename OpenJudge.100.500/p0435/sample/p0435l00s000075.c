#include<stdio.h>
#define ll long long

ll n,d;
ll x[212345],y[212345];

int main(){
  scanf("%lld%lld",&n,&d);
  ll ans=0;
  for(int i=0;i<n;i++){
    scanf("%lld%lld",&x[i],&y[i]);
    if(x[i]*x[i]+y[i]*y[i]<=d*d) ans++;}

  printf("%lld\n",ans);
  return 0;
}
