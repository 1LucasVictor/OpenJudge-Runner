#include <stdio.h>

int n;
int w[100000];

int track( int );

int main( void ) {
	int k, i, limit, left, right;

	scanf("%d %d", &n, &k );

	for( i = 0; i < n; i++ ) {
		scanf("%d", &w[i] );
	}
	
	left = 0;
	right = 1e9;
	while( right-left > 1 ){
		limit = (left+right)/2;
		
		if( track(limit) <= k ){
			right = limit;
		}
		else{
			left = limit;
		}
	}
	printf("%d\n", right );

	return 0;
}

int track( int limit ) {
	int i, pre, tr;

	pre = 0;
	tr = 1;
	for( i = 0; i < n; i++ ) {
		if( w[i] > limit ) {
			return 1e9;
		}

		if( w[i] + pre <= limit ) {
			pre += w[i];
		}
		else {
			tr++;
			pre = w[i];
		}
	}

	return tr;
}
