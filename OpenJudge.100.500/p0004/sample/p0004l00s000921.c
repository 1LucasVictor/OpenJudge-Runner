#include<stdio.h>

long long gcd( long long a ,long long b )
{
	return b ? gcd( b ,a % b ) : a ;
}

long long lcm( long long a ,long long b )
{
	return a * ( b / gcd( a ,b ) ) ;
}


int main()
{
	long long a ,b ;

	while( scanf( "%lld %lld" ,&a ,&b ) != EOF )
	{

		printf( "%lld %lld\n" ,gcd( a ,b ) ,lcm( a ,b ) ) ;
	}

	return 0 ;
}