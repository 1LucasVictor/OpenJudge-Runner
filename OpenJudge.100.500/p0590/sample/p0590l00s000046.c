#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#define MAX 1000                                      
typedef long long ll;
typedef unsigned long long ull;
extern inline int max( int a, int b ) { return a > b ? a : b ; }
extern inline int min( int a, int b ) { return a > b ? b : a ; }
extern inline ll lmax( ll a, ll b ) { return a > b ? a : b ; }
extern inline ll lmin( ll a, ll b ) { return a > b ? b : a ; }
extern inline ull ulmax( ull a, ull b ) { return a > b ? a : b ; }
extern inline ull ulmin( ull a, ull b ) { return a > b ? b : a ; }

int main()
{
	int arr[5];
	int K;
	
	for( int i=0; i<5; ++i ){
		scanf("%d", arr+i);
	}
	scanf("%d", &K);
	
	for( int i=0; i<4; ++i ){
		for( int j=i+1; j<5; ++j ){
			if( arr[j] - arr[i] > K ){
				printf(":(\n");
				return 0;
			}
		}
	}
	printf("Yay!\n");	
	return 0;
}




