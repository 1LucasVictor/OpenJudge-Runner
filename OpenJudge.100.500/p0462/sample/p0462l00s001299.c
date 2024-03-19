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
  
    if (a * bb > 1000000000000000ULL)
    {
        r = a / 100ULL * bb;
    }
    else
    {
      	r = a * bb / 100ULL;
    }
  
  	printf("%llu", r);
  	return (0);
}