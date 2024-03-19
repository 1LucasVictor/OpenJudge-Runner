#include<stdio.h>

int main(void)
{
	
	int n, a[5000];
	int i, j;
	int max, sum;
	
	while(1) {
	
		scanf( "%d", &n );
		if ( n == 0 ) break;
		
		for( i=0; i<n; i++ ) {
			scanf( "%d", &a[i] );
		}
		
		max = 0;
		for ( i=0; i<n; i++ ) {
			sum = 0;
			for ( j=i; j<n; j++ ) {
				sum += a[j];
				if ( max < sum ) max = sum;
			}
		}
		printf( "%d\n", max );
	}
	return 0;
}