#include <stdio.h>

int main(void) {

	int n, m;
	int a[100][100];
	int b[100];

	scanf("%d %d", &n, &m);

	for (int n_i = 0; n_i < n; n_i++) {
		for (int m_i = 0; m_i < m; m_i++) {
			scanf("%d", &a[n_i][m_i]);
		}
	}

	for (int b_i = 0; b_i < m; b_i++) {
		scanf("%d", &b[b_i]);
	}

	for (int n_i = 0; n_i < n; n_i++) {
		int ans = 0;
		for (int m_i = 0; m_i < m; m_i++) {
			ans += a[n_i][m_i] * b[m_i];
			if (m_i == m - 1) {
				printf("%d\n", ans);
			}
		}
	}

	return 0;
}


