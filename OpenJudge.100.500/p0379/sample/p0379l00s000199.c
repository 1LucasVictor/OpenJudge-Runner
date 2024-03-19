#include<stdio.h>

int main(){

	int n, m, i, j;
	scanf("%d %d\n", &n, &m);
	int A[n][m], b[m], c;

	for ( i = 0 ; i < n ; i++ ) {
		for ( j = 0 ; j < m ; j++ ){
			A[i][j] = 0;
			if ( i == 0 ) b[m] = 0;
		}
	}

	for ( i = 0 ; i < n ; i++ ) {
		for ( j = 0 ; j < m ; j++ ) {
			scanf("%d", &A[i][j]);
			if ( j != m - 1 ) {
				scanf(" ");
			} else {
				scanf("\n");
			}
		}
	}
	for ( j = 0 ; j < m ; j++ ){
		scanf("%d", &b[j]);
		if ( j != m - 1 ) scanf("\n");
	}

	for ( i = 0 ; i < n ; i++ ) {
		c = 0;
		for ( j = 0 ; j < m ; j++ ) {
			c = c + A[i][j] * b[j];
		}
		printf("%d\n", c);
	}

    return 0;
}