#include <stdio.h>

int main()
{
	int n, m, l;
	scanf("%d %d %d", &n, &m, &l);

	int first[n][m], second[m][l];
        long result[n][l];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &first[i][j]);
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			scanf("%d", &second[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			result[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				result[i][j] = result[i][j] + first[i][k] * second[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			printf("%ld", result[i][j]);
                        if (j != l -1) printf(" ");
		}
		printf("\n");
	}
}
