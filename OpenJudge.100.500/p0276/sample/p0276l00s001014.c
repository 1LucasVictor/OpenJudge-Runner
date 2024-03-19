#include <stdio.h>

#define MAX_LEN 101
int m[MAX_LEN][MAX_LEN] = {0};

int main(void) {
	int n;
	int i, j, col, num, con;

	scanf("%d", &n);

	for (i = 0; i < n; ++i) {
		scanf("%d", &col);
		scanf("%d", &num);
		for (j = 0; j < num; ++j) {
			scanf("%d", &con);
			m[col][con] = 1;
		}
	}
	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= n; ++j) {
			if (j != n) {
				printf("%d ", m[i][j]);
			} else {
				printf("%d\n", m[i][j]);
			}
		}
	}
	
	return 0;
}