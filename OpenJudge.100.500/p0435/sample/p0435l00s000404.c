#include <stdio.h>

int main()
{
  long n,d;
  scanf("%ld%ld",&n,&d);
  long x[n];
  long y[n];
  int i = 0;
  int cnt = 0;
  while (i < n)
  {
    scanf("%ld%ld",&x[i],&y[i]);
    if (d * d >= (x[i] * x[i]) + (y[i] * y[i]))
      cnt++;
    i++;
  }
  printf("%d",cnt);
}