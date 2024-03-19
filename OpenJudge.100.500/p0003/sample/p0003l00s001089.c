#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f;
	double x, y;
	int D;
	
	while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF){
		x = (e * c - b * f) / (a * e - b * d);
		y = (d * c - a * f) / (b * d - a * e);
		//y = (c * d - a * f) / (b * d - a * e);
		//x = (c - b * y) / a;
		
		x += 0.0001;
		y += 0.0001;
		printf("%.3f %.3f\n", x, y);
	}
	

	
	return (0);
}