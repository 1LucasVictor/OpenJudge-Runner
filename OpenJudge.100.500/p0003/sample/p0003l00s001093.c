#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c;
	double d, e, f;
	double y, x, n;
	double left, right;
	
	while ( scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF ){
		
		n = a;
		
		a *= d;
		b *= d;
		c *= d;
		
		d *= n;
		e *= n;
		f *= n;
		
		left = b - e;    
		right = c - f;    
		
		y = right / left;
		
		e = e * y;
		right = f - e;
		x = right / d;
		
		if (fabs(x) <= 1e-8) x = 1e-8;
		if (fabs(y) <= 1e-8) y = 1e-8;
		
		printf("%.3f %.3f\n", x, y);
	}
	return (0);
}