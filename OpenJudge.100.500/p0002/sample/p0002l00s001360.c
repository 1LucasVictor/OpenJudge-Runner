#include <stdio.h>
#include <math.h>

void sort( int*a, int*b, int*c )
{
	if( *a > *b && *a > *c )
	{
		return;
	}
	else if( *b > *c && *b > *a )
	{
		int tmp = *b;
		*b = *a;
		*a = tmp;
	}
	else
	{
		int tmp = *c;
		*c = *a;
		*a = tmp;
	}
}

int main( void )
{
	int a;
	int b;
	int c;
	int n;
	int i;
	
	scanf( "%d", &n );
	for( i = 0; i < n; i++ )
	{
		scanf( "%d%d%d", &a, &b, &c );
		sort( &a, &b, &c );
		
		if( a * a == b * b + c * c  )
		{
			printf( "YES\n" );
		}
		else
		{
			printf( "NO\n" );
		}
	}
	
	return (0);
}