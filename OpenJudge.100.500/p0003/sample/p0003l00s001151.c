#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, d, e, f;
	float x, y;

	while ( scanf( "%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f ) != EOF )
	{
		x = (float)(( c*e - f*b ) / ( e*a - b*d ));
		y = (float)(( d*c - a*f ) / ( d*b - a*e ));
		if ( -0.0005 <= x && x <= 0 ) x = 0;
		if ( -0.0005 <= y && y <= 0 ) y = 0;
		fprintf( stdout, "%.3f %.3f\n", x, y );
	}

	return 0;
}