#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
#define max 1000000000000000000
int main(void)
{
  ll a;
  double b;
  scanf("%lld%lf",&a,&b);
  ll ans,tmp;
  //tmp=(ll)(100.0*b);
  ans=(ll)(((double)a)*b);
  printf("%lld",ans);
  return 0;
 
}