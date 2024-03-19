#include<stdio.h>
#include<limits.h>

#define NK 100000
#define MAXW 10000


int main() 
{

	int n, k;
	int w[MAXW], P=INT_MAX;

	scanf( "%d%d", &n, &k );

	int i, lowW=0;
	for ( i=0; i<n; i++ ) {
		scanf( "%d", &w[i] );
		if( lowW < w[i] ) {
			lowW = w[i];
		}
	}
	int j, s, tmpk = 0;
	int carry, low;
	for( i=0; i<n; i++ ) {
		low = 0;
		for( j=0; j<NK && j<n; j++ ) {
			low += w[i+j];
			if(  low < lowW ) { continue; }
			if( P < low ) { break; }
			carry = 0;
			tmpk = k;
			for( s=0; s<n; s++ ) {
				carry += w[s];
				if( low < carry ) {
					tmpk--;
					if( tmpk == 0 ) { break; }
					s--;
					carry = 0;
				}
			}
			if( n == s && 1 == tmpk && low < P ) {
				P = low; 
			}
		}
	}
	printf( "%d\n", P );
	
    return 0;
}