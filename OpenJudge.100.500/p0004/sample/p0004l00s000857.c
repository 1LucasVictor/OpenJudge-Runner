#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long gcd( long a, long b )
{
	long tmp;

	if ( a <= b )
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	if ( b == 0 )
	{
		return a;
	}
	else 
	{
		return gcd( b, a%b );
	}
}

long lcm( long a, long b, long GCD )
{

	return ( a * b )/GCD;
}

int main()
{
	long tmp;
	long a, b;

	while ( scanf( "%ld %ld", &a, &b ) != EOF )
	{

		tmp = gcd( a, b );
		fprintf( stdout, "%ld ", tmp );
		fprintf( stdout, "%ld\n", lcm( a, b, tmp ) );	
	}

	return 0;
}