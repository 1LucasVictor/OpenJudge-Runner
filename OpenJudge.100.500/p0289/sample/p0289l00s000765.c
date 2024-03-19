#include <stdio.h>

#define INT_MIN ((int) 1)
#define INT_MAX ((int) 1000000000)

typedef enum
{
	kSuccess = 0,
	kError = -1
}Result;

Result checkNumRange( int num, int min, int max );
int calctateGcd( int x, int y );

int main( void )
{
	int x, y;

	scanf( "%d %d", &x, &y );

	if( (checkNumRange( x, INT_MIN, INT_MAX ) || checkNumRange( y, INT_MIN, INT_MAX )) == kError )
	{
		return kError;
	}

	printf( "%d\n", calctateGcd( x, y ) );

	return kSuccess;
}

Result checkNumRange( int num, int min, int max )
{
	return ((num >= min) && (num <= max)) ? kSuccess : kError;
}

int calctateGcd( int x, int y )
{
	int work;

	if( x < y )
	{
		work = x;
		x = y;
		y = work;
	}

	while( y > 0 )
	{
		work = x % y;
		x = y;
		y = work;
	}

	return x;
}

