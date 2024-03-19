#include <stdio.h>

int	main(void)
{
  	long long   x;
 	int	num;
  	long long   f00;
  	long long	f;
  
  	num = scanf("%lld", &x);
  	if (num != 1)
      	return (0);
  
  	f00 = x / 500;
  	f = (x - 500 * f00) / 5;
  
  	printf("%lld", f00 * 1000 + f * 5);
  	return (0);
}