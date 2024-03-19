#include<stdio.h>
int main()
  {
  long long int x,a,b,c=0,d,e,f,g;
  scanf("%lld",&x);
  a = x/500;
    b = x%500;
    d = a*1000;
    e = b/5;
    g = e*5;
    f = d+g;
    c+=f;
    printf("%lld",c);
    return 0;
  }
