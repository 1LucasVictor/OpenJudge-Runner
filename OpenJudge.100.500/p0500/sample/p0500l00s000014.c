#include <stdio.h>

int main(void) {
	int n, m;
	int s[5];
	int c[5];
	int num[3] = { 0 };
	int num_f[3] = { 0 };

	scanf("%d%d", &n, &m);

	for (int i = 0; i < m; i++) {
		scanf("%d%d", &s[i], &c[i]);
		if (num_f[s[i] - 1 + (3 - n)] == 0) {
			num[s[i] - 1 + (3 - n)] = c[i];
			num_f[s[i] - 1 + (3 - n)] = 1;
		}
		else {
			if (num[s[i] - 1 + (3 - n)] != c[i]) {
				printf("-1\n");
				return 0;
			}
		}
	}

	if (n == 3) {
		if (num[0] == 0)
			if (num_f[0] == 1) {
				printf("-1\n");
				return 0;
			}
			else {
				num[0] = 1;
			}
	}

	if (n == 2) {
		if (num[1] == 0)
			if (num_f[1] == 1) {
				printf("-1\n");
				return 0;
			}
			else {
				num[1] = 1;
			}
	}

	printf("%d\n", num[0] *  100 + num[1] * 10 + num[2]);

	return 0;
}