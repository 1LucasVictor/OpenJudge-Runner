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
	int A, B, T;
	
	scanf("%d %d %d", &A, &B, &T);
	printf("%d", (T/A)*B);
}