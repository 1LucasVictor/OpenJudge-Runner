#include <stdio.h>

int main(int argc, char *args[])
{
	unsigned int n,m,l;
	int x,y;
	unsigned int i,j,k;

	scanf("%d %d %d", &n, &m, &l);

	int A[n][m];
	int B[m][l];
	int C[n][l];


	for( x=0; x<n; x++ ) {
		for( y=0; y<l; y++ ) {
			C[x][y] = 0;
		}
	}


	for( i=0; i<n; i++ ) {
		for( j=0; j<m; j++ ) {
			scanf("%d", &A[i][j]);
		}
	}

	for( i=0; i<m; i++ ) {
		for( j=0; j<l; j++ ) {
			scanf("%d", &B[i][j]);
		}
	}

	for( i=0; i<n; i++ ) {
		for( j=0; j<l; j++ ) {
			for( k=0; k<m; k++ ) {
				C[i][j] += A[i][k] * B[k][j];
			}
			printf("%d", C[i][j]);
			if( j<l-1 ) {
				printf(" ");
			}
		}
		printf("\n");
	}


	return 0;

}