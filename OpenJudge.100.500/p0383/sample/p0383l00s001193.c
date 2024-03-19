#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, m, l;
	int A[100][100];
	int B[100][100];
	int C[100][100];

	int i, j, k;

	scanf("%d %d %d", &n, &m, &l);

	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for(i=0; i<m; i++) {
		for(j=0; j<l; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	for(i=0; i<n; i++) {
		for(j=0; j<l; j++) {
			for(k=0; k<m; k++) {
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}

	for(i=0; i<n; i++) {
		for(j=0; j<l-1; j++) {
			printf("%d ", C[i][j]);
		}
		printf("%d\n", C[i][l-1]);
	}

	return 0;
}
