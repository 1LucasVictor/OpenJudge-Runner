#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f;
	double x, y;
		
	while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF){
		
		x = (c * e - b * f) / (a * e - b * d);
		y = (f * a - c * d) / (a * e - d * b);
		
		printf("%.3lf %.3lf\n", x, y);
		
	}
	
	return (0);
}