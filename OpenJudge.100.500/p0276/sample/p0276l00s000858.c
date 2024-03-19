#include <stdio.h>

#define SIZE 100

int main() {
	int A[SIZE][SIZE];
	int n, i, j, row, col, cols;

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			A[i][j] = 0;
		}
	}

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &row); row--;
		scanf("%d", &cols);
		for (j = 0; j < cols; j++) {
			scanf("%d", &col);
			A[row][--col] = 1;
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d", A[i][j]);
			if (j < n - 1) printf(" ");
		}
		printf("\n");
	}

	return 0;
}
