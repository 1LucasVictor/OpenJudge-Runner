#include<stdio.h>

int n , k;
int max = -1;
int w[100000];

int check( int P ){
	
	int i = 0;
	int s;
	
	for( int j = 0; j < k; j++ ){
		
		s = 0;
		
		while( s + w[i] <= P ){
			
			s += w[i];
			i++;
			if( i == n ) { return n; }
			
		}
		
	}
	
	return i;
	
}

int solve(){
	
	int left = 0;
	int right = n * max;
	int mid;
	int v;
	
	while( left + 1 < right ){
		
		mid = ( right + left ) / 2;
		v = check(mid);
		
		if( v >= n ){
			right = mid;
		}else{
			left = mid;
		}
		
	}
	
	return right;
	
}

int main( void ){
	
	int ans;
	
	scanf( "%d %d" , &n , &k );
	
	for( int i = 0; i < n; i++ ){
		scanf( "%d" , &w[i] );
		if( max < w[i] ){ max = w[i]; }
	}
	
	ans = solve();
	
	printf( "%d\n" , ans );
	
}
