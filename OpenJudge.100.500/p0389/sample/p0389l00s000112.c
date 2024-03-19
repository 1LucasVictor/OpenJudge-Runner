#include <stdio.h>
int main(void) {
	char in[201], tmp[201];
	int m, n, i, j;

	while (1) {
		scanf("%200s ", in);
		if (in[0] == '-')
			break;

		scanf("%d ", &m);
		while (m--) {
			scanf("%d ", &n);
			for (i = 0; in[i+n] != '\0'; i++) {
				tmp[i] = in[i+n];
			}
			for (j = 0; j < n; j++) {
				tmp[i+j] = in[j];
			}
			tmp[i+j] = '\0';
			for (i = 0; tmp[i] != '\0'; i++) {
				in[i] = tmp[i];
			}
		}
		puts(in);
	}
	return 0;
}