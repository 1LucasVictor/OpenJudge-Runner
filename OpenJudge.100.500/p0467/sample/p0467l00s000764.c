#include <stdio.h>

int main()
{
  long a,b,c,k,ans;

  scanf("%ld %ld %ld %ld",&a,&b,&c,&k);

  if(a >= k)
    ans = k;
  else if(a+b >= k)
    ans = a;
  else
    ans = a - (k-a-b);

  printf("%ld",ans);
  return 0;
}
