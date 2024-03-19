#include <stdio.h>

void main(void)
{
  	int a;
  	int b;
  	int c;
  
  	scanf("%d %d %d", &a, &b, &c);
  	
  	if (c - (a - b) >= 0)
	  	printf("%d", c - (a - b));
  	else
      	printf("0");
}