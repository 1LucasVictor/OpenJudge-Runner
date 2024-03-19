#include <stdio.h>

typedef unsigned long long ull;

int	main(void)
{
  	ull	a;
  	double	b;
  	ull bb;
  	ull r;

  	scanf("%llu %lf", &a, &b);
  
  	bb = (ull)(b * 100.0);
  
  	r = a * bb / 100ULL;
  
  	printf("%llu", r);
  	return (0);
}