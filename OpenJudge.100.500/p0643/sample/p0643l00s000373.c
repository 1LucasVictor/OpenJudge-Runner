#include <stdio.h>
void main(void)
{
  int a, b;
  int ret;
  ret = scanf("%d %d", &a, &b);
  
  if( ret >= 1)
    if( (a*b)%2 == 0 )
    	printf("%s", "Even");
    else
    	printf("%s", "Odd");

}