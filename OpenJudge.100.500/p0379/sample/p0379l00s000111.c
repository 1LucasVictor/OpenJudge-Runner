#include <stdio.h>

int main() {
	int line_v[100], matrix_v[100][100], ans_v[100], n = 0, m = 0;

	//input
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &matrix_v[i][j]);
		}
	}

	for (int i = 0; i < m; i++) {
		scanf("%d", &line_v[i]);
	}

	//calc
	for (int i = 0; i < n; i++) {
		ans_v[i] = 0;
		for (int j = 0; j < m; j++) {
			ans_v[i] += matrix_v[i][j] * line_v[j];
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", ans_v[i]);
	}

	return 0;
}
