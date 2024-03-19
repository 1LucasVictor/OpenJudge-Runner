#include <stdio.h>

int	main(void)
{
  	int	n;
  	int	p;
  	int num;
  
  	num = scanf("%d", &n);
  
  	if (n % 2 == 1)
    	p = n / 2 + 1;
  	else
      	p = n / 2;
  
  	printf("%d", p);
  	return (0);
}