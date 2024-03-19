#include <stdio.h>
#include <math.h>

int	main(void)
{
	int		n;
	double	d;
	int		i;
	double	x;
	double	y;
	int		num;
  
  	if (scanf("%d %lf", &n, &d) == EOF)
      return (-1);
  	num = 0;
	i = 0;
	while (i < n)
    {
    	if (scanf("%lf %lf", &x, &y) == EOF)
        	return (-1);
    	if (sqrt(pow(x, 2.0) + pow(y, 2.0)) <= d)
          num++;
		i++;
    }
	printf("%d", num);
	return (0);
}