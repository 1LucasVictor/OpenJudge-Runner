#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define elif else if
#define ll long long
#define pr printf
#define sc scanf

int main()
{
      ll int a, b, c, t;
      while(sc("%lld",&t)==1) {
                  while(t--) {
            sc("%lld %lld %lld",&a,&b,&c);
            ll int p=a*a,q=b*b,r=c*c;
            if((p+q==r) ||(p+r==q) ||(q+r==p)) pr("YES\n");
            else pr("NO\n");
      }
      }
      return 0;
}