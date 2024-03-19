#include<stdio.h>

int main(void)
{
  int a;
  int b;
  
  scanf("%d",&a);
  
  b = a + a*a + a*a*a;
  
  printf("%d",b);
  
  return 0;
  
}