#include <stdio.h>

int main( void ) {

	double a, b, c, d, e, f, x, y;

	while ( scanf( "%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f ) != EOF ) {

		//printf( "%.3lf %.3lf\n", ( c * e - b * f ) / ( a * e - b * d), ( c * d - a * f ) / ( b * d - a * e) );

		y = ( c * d - a * f ) / ( b * d - e * a );  //x,yについて解くと
                                                    //これらの式が導出できる
        x = ( c - ( b * y ) ) / a;
 
        printf( "%.3lf %.3lf\n", x, y );

	}

	return 0;

}