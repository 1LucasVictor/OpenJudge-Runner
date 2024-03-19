#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

//#define DEBUG

#define N 999999

int division_trial( int n ){
	int p=0;//The number of prime numbers
	bool flag;
	int i, j;

	for( i=2; i<=n; i++ ){
		flag=true;
		for( j=2; j<i; j++ ){
			if( i % j == 0 ){
				flag=false;
				break;
			}
		}
		if( flag == true )
			p++;
	}

	return p;
}

//Eratosthenes' sieve
int E_sieve( int n ){
	int p=0;//The number of prime numbers
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

	/***count***/
	for( i=2; i<=n; i++ )
		if( plist[i] == true )
			p++;

	return p;
}

int main(){
#ifdef DEBUG
	
	clock_t start, end;
	int prime;

	start = clock();
	prime = E_sieve( 999999 );
	end = clock();

	printf("prime=%d\n", prime);
	printf("Time=%f\n", (double)(end-start)/CLOCKS_PER_SEC);
	
#else
	
	int n;

	while( scanf("%d", &n) != EOF ){
		printf("%d\n", E_sieve( n ) );
	}
	
#endif
	return 0;

}