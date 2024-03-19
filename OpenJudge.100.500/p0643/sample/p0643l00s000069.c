#include <stdio.h>
void main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%s",(a*b)%2? "Odd": "Even");
}