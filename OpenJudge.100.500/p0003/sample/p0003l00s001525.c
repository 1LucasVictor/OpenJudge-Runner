#include <stdio.h>

void gaussian_elimination(double, double, double, double, double, double);
void pivot(double, double, double, double, double, double);

int main(){
	double a, b, c, d, e, f;
	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		gaussian_elimination(a, b, c, d, e ,f);
	}
 	return 0;
}

void gaussian_elimination(double x1, double y1, double z1, double x2, double y2, double z2){
	double x, y, tmp;

	pivot(x1, y1, z1, x1, y2, z2);
	
	tmp = x1;
	x1 = x1/tmp;
	y1 = y1/tmp;
	z1 = z1/tmp;

	tmp = x2;
	x2 = x2-x1*tmp;
	y2 = y2-y1*tmp;
	z2 = z2-z1*tmp;

	y = z2/y2;
	x = z1-y*y1;

	printf("%1.3lf %1.3lf\n", x, y);
}

void pivot(double x1, double y1, double z1, double x2, double y2, double z2){
	int x, y, z;
	if(x1 <  x2){
		x = x1;
		y = y1;
		z = z1;

		x1 = x2;
		y1 = y2;
		z1 = z2;

		x2 = x;
		y2 = y;
		z2 = z;
	}
}