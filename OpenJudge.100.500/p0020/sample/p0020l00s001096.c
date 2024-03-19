#include <math.h>
#include <stdio.h>

int rel_l_l( double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3, double *x, double *y ) {
	double a, b, c, d;
	int rel;

	if ( x0 != x1 ) {
		a = ( y0 - y1 ) / ( x0 - x1 );
		b = ( x0 * y1 - x1 * y0 ) / ( x0 - x1 );
	}
	if ( x2 != x3 ) {
		c = ( y2 - y3 ) / ( x2 - x3 );
		d = ( x2 * y3 - x3 * y2 ) / ( x2 - x3 );
	}

	rel = 0;
	if ( x0 == x1 ) {
		*x = x0;
		if ( x2 == x3 )
			if ( x0 == x2 )
				rel = 2;
			else
				rel = 1;
		else
			*y = c * *x + d;
	} else {
		if ( x2 == x3 )
			*x = x2;
		else
			if ( fabs( a - c ) < 1e-10 )
				if ( fabs( b - d ) < 1e-10 )
					rel = 2;
				else
					rel = 1;
			else
				*x = ( -b + d ) / ( a - c );
		*y = a * *x + b;
	}

	return rel;
}

int main( void ) {
	int n;

	scanf( "%d", &n );
	while ( n-- ) {
		int rel;
		double x1, y1, x2, y2, x3, y3, x4, y4, x, y;

		scanf( "%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4 );

		rel = rel_l_l( x1, y1, x2, y2, x3, y3, x4, y4, &x, &y );

		printf( "%s\n", rel == 0 ? "NO" : "YES" );
	}

	return 0;
}