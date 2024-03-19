#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	int n, m;
	int i, j;
	int val;
	int sum;
	int matrix_a[100][100] = { 0 };
	int matrix_b[100] = { 0 };

	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			val = 0;
			scanf(" %d", &matrix_a[i][j]);
		}
	}
	for (j = 0; j < m; j++) {
		val = 0;
		scanf(" %d", &matrix_b[j]);
	}

	for (i = 0; i < n; i++) {
		sum = 0;
		for (j = 0; j < m; j++) {
			sum += matrix_a[i][j] * matrix_b[j];
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
