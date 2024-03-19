#include<stdio.h>
int main(){

	double i, k, x, y;
	double a, b, c, d, e, f;
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f) != EOF){
		x = (e*c-b*f)/(a*e-b*d);
		y = (-d*c+a*f)/(a*e-b*d);;
		if(x == -0)
			x =0;
		if(y == -0)
			y=0;
		printf("%.3lf %.3lf\n", x, y);
	}
	return 0;
}