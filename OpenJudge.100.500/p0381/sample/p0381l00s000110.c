#include <stdio.h>

int main() {
	int count, m,i, j, k, n[100], x[100];
	count = 0;

	for (i = 0;i <= 100; i++) {
		scanf("%d %d", &n[i], &x[i]);
			if (n[i] == 0 && x[i] == 0)
				break;
	}

	for (m = 0; m <= n[m];m++) {
		for (i = 1;i <= n[m];i++) {
			for (j = i + 1; j <= n[m]; j++) {
				for (k = j + 1; k <= n[m]; k++) {
					if (i + j + k == x[m])
						count++;
				}
			}
		}
	}
	printf("%d\n", count);

	return 0;


}
