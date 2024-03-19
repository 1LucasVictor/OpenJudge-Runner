#include <stdio.h>
int main()
{
  long long int x;
  scanf("%lld", &x);
  long long int xx = x/500;
  printf("%lld", xx*1000 + ((x-xx*500)/5)*5);
  return 0;
}