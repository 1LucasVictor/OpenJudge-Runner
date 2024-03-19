#include <stdio.h>

int main(int argc, char** argv)
{
	int i, j, v, m, n, *matrix1, *matrix2;
	scanf("%d %d", &n, &m);

	matrix1 = (int *)malloc(sizeof(int) * n * m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &v);
			matrix1[i * m + j] = v;
		}
	}

	matrix2 = (int *)malloc(sizeof(int) * m);
	for (i = 0; i < m; i++) {
		scanf("%d", &v);
		matrix2[i] = v;
	}

	for (i = 0; i < n; i++) {
		int out = 0;
		for (j = 0; j < m; j++) {
			out += (matrix1[i * m + j] * matrix2[j]);
		}
		printf("%d\n", out);
	}
	free(matrix1);
	free(matrix2);
	return 0;
}