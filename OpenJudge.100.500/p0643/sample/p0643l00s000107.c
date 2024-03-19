#include <stdio.h>
void main(void)
{
  long a, b;
  int tmp = scanf("%ld %ld", &a, &b);
  
  printf("%s\n",(a*b)%2? "Odd": "Even");
}