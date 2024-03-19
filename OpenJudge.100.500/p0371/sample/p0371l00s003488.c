#include <stdio.h>
int main( void )
{
	int a, i, n;
	long long max, min;
	long long sum = 0;
	
	scanf( "%d", &a );
	
	scanf( "%d", &n );
	max = n;
	min = n;
	sum += n;
	
	for( i = 1; i <= a-1; i++ ){
		scanf( "%d", &n );
		if( n > max ){
			max = n;
		}
		if( n < min ){
			min = n;
		}
		
		sum += n;
	}
	
	printf( "%d %d %ld\n", min, max, sum );
	
	return 0;
}