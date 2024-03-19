#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b)
{
   int j,k=1;
   while(k!=0)
   {
     j=a/b;
     k=a%b;
     b=a-(j*b);
     a=a/j-k;
   }
   return a;
}


long lcm(int a,int b)
{
  int m,n;
  m=gcd(a,b);
  a=a/m;
  b=b/m;
  n=a*b*m;
  return n;
}

int main()
{
  int a,b;
  while(scanf("%d%d",&a,&b)!=EOF)
  {
    printf("%d %ld\n",gcd(a,b),lcm(a,b));
  }
  return 0;
}

