#include<stdio.h>

#define MAX 10001
#define MAX_NUM 1000000
#define MIN_NUM -1000000
int main( void ) 
{
	int n;
	double a[MAX];
	double max=MIN_NUM,min=MAX_NUM,sum=0;
	
	scanf( "%d", &n );
	
	int i;
	for( i=0; i<n; i++ ) {
		scanf( "%lf", &a[i] );
		if( max <= a[i] ) {
			max=a[i];
		}
		if( a[i] <= min ) {
			min=a[i];
		}
		sum+=a[i];
	}
	
	printf( "%.lf %.lf %.lf\n", min, max, sum );

	return 0;
}