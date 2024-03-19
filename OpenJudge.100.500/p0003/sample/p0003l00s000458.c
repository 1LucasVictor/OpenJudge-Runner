#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c,d,e,f;
	double i,x,y;
	
	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		
		y = (a*f - c*d) / (a*e - b*d);
		x = (b*f - c*e) / (b*d - a*e);
		
		printf("%.3f %.3f\n", x,y);
	}
	
	return 0;
}