#include <stdio.h>

int main(void)
{
	double a, b, c;
	double d, e, f;
	double y, x;
	int n;
	
	while ( scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF ){
		
		n = a;
		
		a *= d;
		b *= d;
		c *= d;
		
		d *= n;
		e *= n;
		f *= n;
		
		y = b - e;    
		x = c - f;    
		
		y = x / y;
		
		e = e * y;
		f = f - e;
		x = f / d;
		
		printf("%.3lf %.3lf\n", x + 0.0001, y + 0.0001);
	}
	return (0);
}