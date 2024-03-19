/*********************************
*include
*********************************/
#include <stdio.h>

/*********************************
*define
*********************************/
long long ary[ 10000 ];

/*********************************
*function
*********************************/
int main( void )
{
	int num;
	int loop;
	long long min;
	long long max;
	long long sum;

	scanf( "%lo", &num );
	
	for( loop = 0; loop < num; loop++ ) {
		scanf( "%d", &ary[ loop ] );
	}
	
	min = ary[ 0 ];
	max = ary[ 0 ];
	sum = 0;

	/* ????°????????????§??????????¨?????±??????? */
	for( loop = 0; loop < num; loop++ ) {
		if( min > ary[ loop ] ) {
			min = ary[ loop ];
		}
		if( max < ary[ loop ] ) {
			max = ary[ loop ];
		}
		sum = sum + ary[ loop ];
	}
	
	printf( "%d %d %d\n", min, max, sum );

	return 0;
}