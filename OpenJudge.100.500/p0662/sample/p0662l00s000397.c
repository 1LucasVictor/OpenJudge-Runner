#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

typedef double db;
typedef int in;
typedef long int li;
typedef long long int lli;
typedef long ld;
typedef long lld;

#define pi M_PI
#define in scanf
#define out printf
#define inf INT_MAX
#define rep(i,n) for(int i=0;i<n;++i)
#define debugd(d) printf("%d\n",d)
#define debugs(s) printf("%s\n",s)
#define debugc(c) printf("%c\n",c)
#define debugf(f) printf("%f\n",f)


int main (void)
{
  int a,b,c,d;
  int s,e;
  in("%d %d %d %d \n",&a,&b,&c,&d);
  if(a>d||c>b){
    puts("0");
    return 0;
  }
  s = a>=c ? a : c;
  e = b<=d ? b : d;
  printf("%d\n",e-s);
}