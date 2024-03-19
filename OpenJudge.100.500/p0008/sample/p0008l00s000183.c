#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

//faster vesion than initial submission

bool* E_sieve( int n ){
	bool* plist = (bool*)malloc( sizeof(bool)*(n+1) );
	int i, j, k;

	memset( plist, true, sizeof(bool)*(n+1) );

	/***sieve***/
	for( i=2; i*i<=n; i++ ){

		//find a prime number
		for( j=i; plist[j]!=true; j++ )
			;

		//eliminate multiple of the prime number
		for( k=2*j; k<=n; k+=j ){
			plist[k]=false;
		}

	}

	return plist;
}

int main(){
	int n, i, p;
	bool *table;
	
	table = E_sieve( 999999 );

	while( scanf("%d", &n) != EOF ){
		p=0;
		for( i=2; i<=n; i++){
			if( table[i] == true )
				p++;
		}
		printf("%d\n", p );
	}
	
	return 0;

}