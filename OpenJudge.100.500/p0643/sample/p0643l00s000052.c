#include <stdio.h>
void main(void)
{
  int a, b, ret;
  ret= scanf("%d %d", &a, &b);
  if( ret >1 )  printf("%s\n",(a*b)%2? "Odd": "Even");

}