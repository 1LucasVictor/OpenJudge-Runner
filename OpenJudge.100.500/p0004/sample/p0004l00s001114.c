#include <stdio.h>
#include <stdlib.h>

int main(void) {
  long long int a,b,a_gcd,b_gcd,r,gcd,lcm,tmp;
  while(scanf("%lld %lld",&a,&b) != EOF) {
    if(b > a) {
      tmp = a;
      a = b;
      b = tmp;
    }
    /* GCD */
    a_gcd = a;
    b_gcd = b;
    while((r = a_gcd % b_gcd) != 0) {
      a_gcd = b_gcd;
      b_gcd = r;
    }
    gcd = b_gcd;
    /* LCM */
    lcm = (a*b)/gcd;
    printf("%lld %lld\n",gcd,lcm);
  }
  return 0;
}