#include<stdio.h>
int main(void)
{
  long long a;
  double b;
  scanf("%lld %lf",&a,&b);
  int c=b*100;
  //printf("%lf\n",(double)c);
  printf("%lld\n",(long long)((a*c+0.5)/100));
  return 0;
}
