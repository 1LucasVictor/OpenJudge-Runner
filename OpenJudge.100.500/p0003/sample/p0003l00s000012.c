#include<stdio.h>
int main(void){

	double a, b, c, d, e, f;
	double A,B;
	double x, y;

	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		 
	 
	 if ( (a > 0 && d < 0)|| (a > 0 && d > 0)) {
		A = c*d - f*a;
		B = b*d - e*a;
        y = A / B;
    }
    
    else if ((a < 0 && d > 0) || (a < 0 && d < 0)) {
		A = c*d + f*a;
		B = b*d + e*a;
        y = A / B;
    }
	
    x = (c - y * b) / a;
	printf("%.3lf %.3lf\n" ,x , y);
	}
	return 0;

}
