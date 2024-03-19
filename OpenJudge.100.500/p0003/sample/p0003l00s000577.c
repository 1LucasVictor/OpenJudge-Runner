#include <stdio.h>

int main(void)
{
	float a, b, c;
	float d, e, f;
	float x, y, z;
	float i;
	
	while (scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != EOF){
	i = a;
	
	a *= d;
	b *= d;
	c *= d;
	d *= i;
	e *= i;
	f *= i;
	
	if (b >= e){
		y = b - e;
		z = c - f;
	}
	else {
		y = e - b;
		z = f - c;
	}
	z /= y;
	
	y = z;
	
	if (a < 0){
		a *= -1.0;
		b *= -1.0;
		c *= -1.0;
	}
	x = (c - b * z) / a;
	
	printf("%.3f %.3f\n", x, y);
	}
	return (0);
}