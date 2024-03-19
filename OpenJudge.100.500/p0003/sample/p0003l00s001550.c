#include <stdio.h>
#include <math.h>
int main(){
	double a, b, c, d, e, f;
	double x, y, det;
	
	while( scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
		det = a * e - b * d;
		if( det != 0 ){
			x = ( e * c - b * f ) / det;
			y = ( a * f  - c * d) / det;
			if( x == fabs(x)){
				x = fabs(x);
			}
			if( y == fabs(y)){
				y = fabs(y);
			}
			printf("%.3f %.3f\n", x, y);
		}
	}
	return 0;
}