#include <math.h>
#include <stdio.h>

int rel_l_l( double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4 ) {
	int rel;

	rel = 0;
	if ( fabs( ( x1 - x2 ) * ( x3 - x4 ) + ( y1 - y2 ) * ( y3 - y4 ) ) < 1e-10 )
		rel = 1;
	else if ( fabs( ( x1 - x2 ) * ( y3 - y4 ) - ( y1 - y2 ) * ( x3 - x4 ) ) < 1e-10 ) {
		rel = 2;
		if ( fabs( ( x1 - x3 ) * ( y3 - y4 ) - ( y1 - y3 ) * ( x3 - x4 ) ) < 1e-10 )
			rel = 3;
	}

	return rel;
}

int main( void ) {
	int n;

	scanf( "%d", &n );
	while ( n-- ) {
		double x1, y1, x2, y2, x3, y3, x4, y4;

		scanf( "%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4 );
		puts( rel_l_l( x1, y1, x2, y2, x3, y3, x4, y4 ) >= 2 ? "YES" : "NO" );
	}

	return 0;
}