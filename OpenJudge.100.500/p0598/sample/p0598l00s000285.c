#include<stdio.h>

int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  
  if((b % a) >= 1)
  {
    b -= a;
  }
  else
  {
    b += a;
  }
  printf("%d", b);
  
  return 0;
}