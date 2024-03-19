#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void PrintX_Y( int a, int b, int c, int d, int e, int f )
{
	float x, y;

	x = (float)(( c*e - f*b ) / ( e*a - b*d ));
	y = (float)(( d*c - a*f ) / ( d*b - a*e ));
	fprintf( stdout, "%.3f %.3f\n", x, y );
}

int main()
{
	int a, b, c, d, e, f;
	while ( scanf( "%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f ) != EOF )
	{
		PrintX_Y( a, b, c, d, e, f );
	}

	return 0;
}