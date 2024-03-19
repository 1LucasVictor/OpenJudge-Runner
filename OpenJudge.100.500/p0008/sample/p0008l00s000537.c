#include <stdio.h>

#define MAX	( 1000000 )

void setPrimeFlag( void );
int getNumOfPrime( int number );
int primeFlag[MAX];

int main( void )
{
	int n;
	while( scanf( "%d", &n ) != EOF )
	{
		setPrimeFlag();
		printf( "%d\n", getNumOfPrime( n ) );
	}
	
	return (0);
}

int getNumOfPrime( int number )
{
	int i;
	int ans = 0;
	
	for( i = 0; i <= number; i++ )
	{
		if( primeFlag[i] == 1 )
		{
			ans++;
		}
	}
	return (ans);
}

void setPrimeFlag( void )
{
	int i;
	int j;
	
	primeFlag[0] = -1;
	primeFlag[1] = -1;
	
	for( i = 2; i < MAX; i++ )
	{
		if( primeFlag[i] == 0 )
		{
			primeFlag[i] = 1;
			for( j = i + i; j < MAX; j += i )
			{
				primeFlag[j] = -1;
			}
		}
	}
}