#include <stdio.h>

int main()
{
	float a, b, c, d, e, f;
	float x, y;
	
	while(scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != EOF){
		
		x = ((e*c)-(b*f)) / ((e*a)-(b*d));
		y = ((d*c)-(a*f)) / ((d*b)-(a*e));
		
		printf("%.3f %.3f\n", x, y);
	}
	
	return 0;
}