#include <stdio.h>

void getAnswer( int a, int b, int c, int d, int e, int f, double* x, double* y );

int main( void )
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	
	double x;
	double y;
	
	while( scanf( "%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f ) != EOF )
	{
		getAnswer( a, b, c, d, e, f, &x, &y );
		printf( "%.3lf %.3lf\n", x, y );
	}
	
	return (0);
}

void getAnswer( int a, int b, int c, int d, int e, int f, double* x, double* y )
{
	*x = ( b * f - c * e ) / ( b * d - a * e );
	*y = ( c - a * *x ) / b;
}