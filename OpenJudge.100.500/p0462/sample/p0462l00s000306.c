#include <stdio.h>
#include <math.h>

typedef unsigned long long ull;

int	main(void)
{
  	ull	a;
  	double	b;
  	ull bb;
  	ull r;

  	scanf("%llu %lf", &a, &b);
  
  	bb = (ull)(b * 100.0);
/*  	
    if (a % 100ULL == 0ULL)
    {
        r = a / 100ULL * bb;
    }
    else if (a % 10ULL == 0ULL)
    {
        r = a / 10ULL * bb / 10ULL;
    }
    else
    {
 */     	r = a * bb / 100ULL;
 /*   }
 */ 
  	printf("%llu", r);
  	return (0);
}