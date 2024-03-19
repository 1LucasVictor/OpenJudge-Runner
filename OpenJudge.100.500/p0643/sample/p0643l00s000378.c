#include <stdio.h>

int main(void)

{
  int a , b , c ,d;
  scanf("%d %d",&a,&b);
  
  c = a % 2;
  d = b % 2;
  if (c == 0) 
  {
  	printf("Even");
  } else if (d == 0) 
  	{
  printf("Even");
  	} else {
  	printf("Odd");
  	}

  return 0;
}