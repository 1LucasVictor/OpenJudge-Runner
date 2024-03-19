#include <stdio.h>

typedef long long ll;
int main(void)
{
  ll h,n,a[10000],ans=0;
  scanf("%lld %lld",&h,&n);
  for(int i=0;i<n;i++) 
  {
    scanf("%lld",&a[i]);
    ans += a[i];
  }
  if(h-ans <= 0)
    printf("Yes");
  else
    printf("No");
  return 0;
}