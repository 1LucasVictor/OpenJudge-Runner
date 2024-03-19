#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
 
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdarg.h>
#include<malloc.h>

double round(double);

int main()
{
	double a, b, c, d, e, f;
	double x, y;
	
	while(scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF){

		x = (c*e - b*f)/(a*e - b*d);
		y = (a*f - c*d)/(a*e - b*d);

		x = x * 1000;
		y = y * 1000;

		round(x);
		round(y);

		x = x / 1000;
		y = y / 1000;

		printf("%5.3f %5.3f\n", x, y);
	}
	return 0;
}

double round(double x)
{
	if(x > 0.0){
		return floor(x + 0.5);
	}else{
		return -1.0 * floor(fabs(x) + 0.5);
	}
}