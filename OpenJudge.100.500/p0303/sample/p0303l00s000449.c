#include<stdio.h>
#include<limits.h>

#define NK 100000
#define MAXW 10000


int main() 
{
	int n, k;
	int w[MAXW], P=INT_MAX;

	scanf( "%d%d", &n, &k );

	int i, maxW=0;
	double ave, sum = 0;
	for ( i=0; i<n; i++ ) {
		scanf( "%d", &w[i] );
		sum += w[i];
		if( maxW < w[i] ) {
			maxW = w[i];
		}
	}
	ave = sum/k;
	maxW = ( ave < maxW )? maxW: ave;
	
	int j, s, tmpk;
	int carry, high;
	
	for( i=0; i<n; i++ ) {
		high = 0;
		for( j=i; j<n; j++ ) {
			high += w[j];
			if( high < maxW ) { continue; }
			if( P < high ) { break; }
			carry = 0;
			tmpk = k;
			for( s=0; tmpk!=0 &&  s<n; s++ ) {
				carry += w[s];
				if( high < carry ) {
					tmpk--;
					s--;
					carry = 0;
				}
			}
			if( 0 < tmpk && high < P && carry <= high ) {
				P = high;
				break;
			}
		}
	}
	printf( "%d\n", P );
	
    return 0;
}