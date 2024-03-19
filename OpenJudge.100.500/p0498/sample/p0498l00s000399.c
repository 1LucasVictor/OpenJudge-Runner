#include<stdio.h>

int main()
{
  int n,a;
  scanf("%d", &n);
  if(n%2 == 0) a = n / 2;
  else a = (n+1) / 2;
  printf("%d\n",a);

  return 0;
}