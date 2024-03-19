#include<stdio.h>

int main( void ) 
{
	long n;
	long nums[10001];
	long prims[10001];
	long cnt,pcnt,max;
	long i,j;

	scanf( "%ld", &n );
	max=0;
	for( i=0; i<n; i++ ) {
  		scanf( "%ld", &nums[i] );
  		if( max < nums[i] ) {
  			max=nums[i];
  		}
  	}
 
	pcnt=0;
	prims[pcnt++]=2;
	for( i=3; i<=max; i++ ) {
		for( j=0; j<pcnt; j++ ) {
			if( 0==i%prims[j] ) {
				break;
			}
		}
		if( prims[pcnt-1]< i && pcnt==j ) {
			prims[pcnt++]=i;
		}
  	}
	cnt=0;
	for( i=0; i<n; i++ ) {
		for( j=0; j<pcnt; j++ ) {
			if( prims[j]==nums[i] ) {
				cnt++;
				break;
			}
		}
  	}

	printf( "%ld\n", cnt );

	return 0;
}