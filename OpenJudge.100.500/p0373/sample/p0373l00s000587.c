#include<stdio.h>
void sp(int n, int m) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (i == 0 && n - 1 && m - 1 || j == 0 && n - 1 && m - 1 
					|| i == n - 1 && n - 1 && m - 1 || j == m - 1 && m - 1 && m - 1)
				putchar('#');
			else
				putchar('.');
		}putchar('\n');
	}
}


int main() {
	int H[300], W[300];
	int i;

	for (i = 0;; i++) {
		scanf("%d %d", &H[i], &W[i]);
		if (H[i] == 0 && W[i] == 0)
			break;
	}

	for (int k = 0; k < i; k++) {
		sp(H[k], W[k]);
		putchar('\n');
	}

	return 0;
}