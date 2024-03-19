#include<stdio.h> 

#define MAXLEN 10000    
     
int main( void ) 
{
	int n,q;
	int S[ MAXLEN+1 ],T[ MAXLEN+1 ];
	int i,j;
	int cnt;    
	
	scanf( "%d", &n ); 
	for( i=0; i<n; i++ ) {
		scanf( "%d", &S[i] ); 
	}
	
	cnt=0;
	scanf( "%d", &q ); 
	for( i=0; i<q; i++ ) {
		scanf( "%d", &T[i] );
		for( j=0; j<n; j++ ) {
			if( T[i] == S[j] ) {
				cnt++;
				break;
			}
		}
	}
	
	if( cnt ) {
		printf( "%d\n", cnt );
	} else {
		printf( "0\n" );
	}
	
	return 0;
}