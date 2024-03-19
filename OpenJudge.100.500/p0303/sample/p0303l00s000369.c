#include<stdio.h>

int check(int p, int n, int k, int w[] )
{
	int i = 0;
	for( int j = 0; j < k; j++ ){
		int s = 0;
		while( s + w[i] <= p ){
			s += w[i];
			i++;
			if( i == n ){
				break;
			}
		}
	}
	return i;
}

int main(void)
{
	int n, k, i;
	scanf( "%d %d", &n, &k );
	int w[n];
	for( i= 0; i < n; i++ ){
		scanf( "%d", &w[i] );
	}
	
	int right = 100000 * 10000, left = 0, mid;
	
	while( right - left > 1 ){
		mid = (right+left) / 2;
		int v = check(mid, n, k, w);
		if( v >= n ){
			right = mid;
		}else{
			left = mid;
		}
	}
	
	printf( "%d\n", right );
	
	return 0;
}
