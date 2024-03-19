#include <stdio.h>
int main()
{
 long long a, b, x, y, t, gcd, lcm;

  while(scanf("%lld%lld", &x, &y)!=EOF){
    a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
   gcd = a;
lcm = (x*y)/gcd;
  }
    printf("%lld %lld\n",gcd,lcm);
  }






  return 0;

}