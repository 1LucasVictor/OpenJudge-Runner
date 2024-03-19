#include<stdio.h>
#include<limits.h>

#define NK 100000

int n, k;
int w[NK], P=INT_MAX;

int main( int argc, char *argv[] ) 
{
	int i, j, start;
	int sum;
	int truck, truckCnt, loadings, miniLoadings;

	scanf( "%d%d", &n, &k );

	sum = miniLoadings = 0;
	for ( i=0; i<n; i++ ) {
		scanf( "%d", &w[i] );
		sum += w[i];
		if( miniLoadings < w[i] ) {
			miniLoadings = w[i];
		}
	}
	if( 1 == k ) {
        P = sum;    
    } else if( n == k ) {
    	P = miniLoadings;
    } else {
    	miniLoadings = sum/k;
		start = loadings = 0;
		for( i=0; i<n; i++ ) {
			loadings += w[i];
			if( P <= loadings ) { 
				loadings -= w[ start++ ];
				loadings -= w[ i-- ];
				continue;
			}
			if( miniLoadings < loadings ) {
				truck = 0;
				truckCnt = k;
				for( j=0; truckCnt!=0 &&  j<n; j++ ) {
					truck += w[j];
					if( loadings < truck ) {
						truckCnt--;
						j--;
						truck = 0;
					}
				}
				if( truckCnt && loadings < P ) {
					P = loadings;
					loadings -= w[ start++ ];
					loadings -= w[ i-- ];
				} else {
					miniLoadings = loadings;
				}
			}
		}
	}

	printf( "%d\n", P );
   
    return 0;
}