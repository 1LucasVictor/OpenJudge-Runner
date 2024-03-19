/*
 * main.c
 *
 *  Created on: 2020/07/27
 *      Author: 113896
 */
#include <stdio.h>
#include <stdlib.h>

void initMatrix(long int** a, long int n, long int m) {
	for (long int i = 0; i < n; i++) {
		for (long int j = 0; j < m; j++) {
			a[i][j] = 0;
		}
	}
}

void printMatrix(long int** a, long int n, long int m) {
	for (long int i = 0; i < n; i++) {
		for (long int j = 0; j < m; j++) {
			printf("%ld", a[i][j]);
			if (j == m-1) printf("\n");
			else printf(" ");
		}
	}
}

int main() {

	long int n, m, l;
	scanf("%ld%ld%ld", &n, &m, &l);

	long int** A = (long int**)malloc(n * sizeof(long int*));
	long int** B = (long int**)malloc(m * sizeof(long int*));
	long int** C = (long int**)malloc(n * sizeof(long int*));

	for (long int i = 0; i < n; i++) {
		A[i] = (long int*)malloc(m * sizeof(long int));
	}

	for (long int i = 0; i < m; i++) {
		B[i] = (long int*)malloc(l * sizeof(long int));
	}

	for (long int i = 0; i < n; i++) {
		C[i] = (long int*)malloc(l * sizeof(long int));
	}

	initMatrix(A, n, m);
	initMatrix(B, m, l);
	initMatrix(C, n, l);

	for (long int i = 0; i < n; i++) {
		for (long int j = 0; j < m; j++) {
			scanf("%ld", &A[i][j]);
		}
	}

	for (long int i = 0; i < m; i++) {
		for (long int j = 0; j < l; j++) {
			scanf("%ld", &B[i][j]);
		}
	}

	for (long int i = 0; i < n; i++) {
		for (long int j = 0; j < l; j++) {
			C[i][j] = 0;
		}
 	}


	long int sum;
	for (long int i = 0; i < n; i++) {
		for (long int j = 0; j < l; j++) {
			sum = 0;
			for (long int k = 0; k < m; k++) {
				sum += A[i][k] * B[k][j];
//				printf("(%d, %d, %d): %d * %d = %d\n", i, k, j, A[i][k], B[k][j], A[i][k]*B[k][j]);
			}
			C[i][j] = sum;
		}
	}

	for (long int i = 0; i < n; i++) {
		for (long int j = 0; j < l; j++) {
			printf("%ld", C[i][j]);
			if (j == l-1) printf("\n");
			else printf(" ");
		}
	}

	return 0;
}


