#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ll long long

ll n,m,k;
ll a[212345],b[212345];

int main(){
  scanf("%lld%lld%lld",&n,&m,&k);

  a[0]=0;
  b[0]=0;
  for(ll i=1;i<=n;i++){
    scanf("%lld",&a[i]);
    a[i] = a[i]+a[i-1];}
  for(ll i=1;i<=m;i++){
    scanf("%lld",&b[i]);
    b[i] = b[i]+b[i-1];}
  
  ll ans=0;
  ll indb=m;
  for(ll i=1;i<=n;i++){
    if(a[i]>k) break;
    while(a[i]+b[indb]>k && indb>0){
      indb--;}
    if(i+indb>ans) ans=i+indb;
  }

  printf("%lld\n",ans);
  
  return 0;
}
