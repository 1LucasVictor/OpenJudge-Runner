#include <stdio.h>

int getGCD( int a, int b );
int getLCM( int a, int b );

int main( void )
{
	unsigned int GCD;
	unsigned int LCM;
	
	int a;
	int b;
	
	while( scanf( "%d %d", &a, &b ) != EOF )
	{
		if( a >= b )
		{
			GCD = getGCD( a, b );
			LCM = getLCM( a, b );
		}
		else
		{
			GCD = getGCD( b, a );
			LCM = getLCM( b, a );
		}
		
		printf( "%d %d", GCD, LCM );
	}
	
	return (0);
}

int getLCM( int a, int b )
{
	int GCD = getGCD( a, b );
	return ( a * (b / GCD) );
}

int getGCD( int a, int b )
{
	if( b == 0 )
	{
		return (a);
	}
	
	return (getGCD( b, a % b ) );
}