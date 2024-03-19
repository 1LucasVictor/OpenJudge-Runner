#include <stdio.h>
int main()
{
  long double a;
  long double b;
  scanf("%Lf %Lf",&a,&b);
  long long int c=a*b;
  printf("%lld\n",c);
}
