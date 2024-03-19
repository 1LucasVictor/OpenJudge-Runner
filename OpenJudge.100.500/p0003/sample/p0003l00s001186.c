#include <stdio.h>

int main(){
	double a, b, c, d, e, f;
	float x, y;
	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		x = (float)((c*e - f*b)/(a*e - d*b));
		y = (float)((c*d - f*a)/(b*d - e*a));
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}