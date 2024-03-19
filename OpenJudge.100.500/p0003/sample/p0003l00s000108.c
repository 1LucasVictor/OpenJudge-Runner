#include <stdio.h>

void getAnswer( double a, double b, double c, double d, double e, double f, double* x, double* y );

int main( void )
{
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;
	
	double x;
	double y;
	
	while( scanf( "%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f ) != EOF )
	{
		getAnswer( a, b, c, d, e, f, &x, &y );
		printf( "%.3lf %.3lf\n", x + 0.0001, y + 0.0001 );
	}
	
	return (0);
}

void getAnswer( double a, double b, double c, double d, double e, double f, double* x, double* y )
{
	*x = ( b * f - c * e ) / ( b * d - a * e );
	*y = ( c - a * ( b * f - c * e ) / ( b * d - a * e ) ) / b;
}