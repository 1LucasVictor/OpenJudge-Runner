#include <stdio.h>
#include <stdlib.h>

int main(){
	double a, b, c, d, e, f, x, y;
	
	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		if (a*e-d*b != 0){
			x = (c*e-f*b)/(a*e-d*b);
			y = (c*d-f*a)/(b*d-e*a);
			printf("%.3f %.3f\n", x, y);
		} else {
			printf("0.000 0.000\n");
		}
	}
	return 0;
}