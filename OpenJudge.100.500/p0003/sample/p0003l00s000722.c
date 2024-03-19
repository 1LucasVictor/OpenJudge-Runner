#include <stdio.h>

int main(void){
	
	float a, b, c, d, e, f;
	float x, y;
	
	while(scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != EOF){
	
	y = (d * c - a * f) / (d * b - a * e);
	x = (-1 * e * y + f) / d;
	
	printf("%.3f %.3f\n", x, y);
	}
	return 0;
}