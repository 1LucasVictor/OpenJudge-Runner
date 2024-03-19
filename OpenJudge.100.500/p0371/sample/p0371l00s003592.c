#include<stdio.h>
int main(void)
{
  long long n,a,x,mn,mx,s;
  s=0;
  mn=1000000;
  mx=-1000000;
  scanf("%lld",&n);
  for(x=0;x<n;x++){
    scanf("%lld",&a);
    s=s+a;
    if(mn>a){mn=a;}
    if(mx<a){mx=a;}
  }
  printf("%lld %lld %lld\n",mn,mx,s);

  return 0;
}
