#include <stdio.h>

int main()
{
	int n, m, l, data1[100][100], data2[100][100], data3[100][100];

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			data3[i][j] = 0;
		}
	}

	scanf("%d%d%d", &n, &m, &l);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &data1[i][j]);
		}
	}

	for (int i = 0; i < m;i++) {
		for (int j = 0; j < l; j++) {
			scanf("%d", &data2[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				data3[i][j] += data1[i][k] * data2[k][j];
			}
			printf("%d", data3[i][j]);
			if (j != l - 1) {
				printf(" ");
			}
			else if (j == l - 1) {
				printf("\n");
			}
		}
	}

    return 0;
}