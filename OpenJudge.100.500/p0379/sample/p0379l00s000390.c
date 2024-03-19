#include <stdio.h>

#define MAX 100

int n, m;
int a[MAX][MAX];
int b[MAX];

int main(void) {
	int i, j;
	if (scanf("%d%d", &n, &m) != 2) return 1;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (scanf("%d", &a[i][j]) != 1) return 1;
		}
	}
	for (i = 0; i < m; i++) {
		if (scanf("%d", &b[i]) != 1) return 1;
	}
	
	for (i = 0; i < n; i++) {
		int tomatu_haruka = 0;
		for (j = 0; j < m; j++) {
			tomatu_haruka += a[i][j] * b[j];
		}
		printf("%d\n", tomatu_haruka);
	}
	return 0;
}

