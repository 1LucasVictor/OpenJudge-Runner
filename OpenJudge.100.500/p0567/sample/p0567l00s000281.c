#include<stdio.h>

int main(void)
{
  int a;
  int b;
  int c;
  
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  
  a = a - b;
  c = c - a;
  printf("%d", c);
  
  return 0;
}
  
  
  