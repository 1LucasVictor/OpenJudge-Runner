#include <stdio.h>

int main(){
	double a,b,c,d,e,f;
	double x,y;
	double det;
	double inv[2][2];
	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d,&e, &f) != EOF) {
		det = a*e-b*d;
		inv[0][0] =  e/det;
		inv[0][1] = -b/det;
		inv[1][0] = -d/det;
		inv[1][1] =  a/det;
		x = inv[0][0] * c + inv[0][1] * f;
		y = inv[1][0] * c + inv[1][1] * f;
		printf("%.3f %.3f\n", x+0.0004, y+0.0004);
	}
	return 0;
}