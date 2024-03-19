#include <stdio.h>
int main()
{
 long long i,j,a,b,c,k;
  scanf("%lld %lld %lld %lld",&a,&b,&c,&k);
  if(k)
  {
    if(k>=a)
    {
        k-=a;
    if(k>=b)
    {
        k-=b;
      printf("%lld\n",a-k);
    }
    else
      printf("%lld\n",a);
    }
    else
      printf("%lld\n",k);
  }
  else
    printf("0\n");
  return 0;
}
