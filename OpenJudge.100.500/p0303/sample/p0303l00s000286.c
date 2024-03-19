#include<stdio.h>
#include<limits.h>

#define NK 100000

int main() 
{
	int n, k;
	int w[NK], P=INT_MAX;

	scanf( "%d%d", &n, &k );

	int i;
	double sum = 0;	
	for ( i=0; i<n; i++ ) {
		scanf( "%d", &w[i] );
		sum += w[i];
	}
	
	int maxLoadings = sum/k;
	int j, start;
	int truck, truckCnt, loadings;
	
	start = loadings = 0;
	for( i=0; i<n; i++ ) {
		loadings += w[i];
		if( maxLoadings <= loadings ) {
			if( P < loadings ) { 
				loadings -= w[ start++ ];
				loadings -= w[ i-- ];
				continue;
			}
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
			}
			loadings -= w[ start++ ];
			loadings -= w[ i-- ];
		}
	}
	printf( "%d\n", P );
	
    return 0;
}