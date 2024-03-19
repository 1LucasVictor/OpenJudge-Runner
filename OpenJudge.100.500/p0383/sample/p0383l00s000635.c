#include <stdio.h>

int main(){
	int i, j, k;
	int n, m, l;
	int A[3][3] = { 0 };
	int B[3][3] = { 0 };
	unsigned int C[3][3] = { 0 };

	scanf("%d %d %d", &n, &m, &l);

	// input A
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	// input B
	for(i=0; i<m; i++) {
		for(j=0; j<l; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	// output C
	for(i=0; i<n; i++) {
		for(j=0; j<l; j++) {
			for(k=0; k<m; k++) {
				C[i][j] += A[i][k]*B[k][j];
			}
			printf("%d", C[i][j]);
			if(j==l-1) printf("\n");
			else printf(" ");
		}
	}

	return 0;
}