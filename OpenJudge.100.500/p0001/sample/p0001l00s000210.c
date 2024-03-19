#include <stdio.h>

int getDigit( int num, int digit )
{
	if( num / 10 == 0 )return (digit);
	else return ( getDigit( num / 10, digit + 1 ) );
}

int main( void )
{
	int a;
	int b;
	
	while( scanf( "%d%d", &a, &b ) != EOF )
	{
		printf( "%d\n", getDigit( a + b, 1 ) );
	}
	return (0);
}