#include <stdio.h>

void renritsu(double a, double b, double c, double d, double e, double f, double *x, double *y)
{
	int z;
	
	if (a == d){
		*y = (c - f) / (b - e);
		*x = (c - (b * *y)) / a;
	}
	
	else if (b == e){
		*x = (c - f) / (a - d);
		*y = (c - (a * *x)) / b;
	}
}

int main(void)
{
	double a, b, c, d, e, f;
	int i;
	double x = 0, y = 0;
	int copy;
	
	while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		if (a == d || b == e){
			renritsu(a, b, c, d, e, f, &x, &y);
		}
		else {
			copy = a;
			a *= d;
			b *= d;
			c *= d;
			d *= copy;
			e *= copy;
			f *= copy;
			renritsu(a, b, c, d, e, f, &x, &y);
		}
		if (x == 0){
			x = 0;
		}
		else if(y == 0){
			y = 0;
		}
			
		printf("%.3lf %.3lf\n", x, y);
	}
	
	return 0;
}