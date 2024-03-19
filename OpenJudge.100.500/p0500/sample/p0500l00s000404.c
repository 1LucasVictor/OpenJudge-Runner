#include <stdio.h>

int main(void) {
	int N, M;
	int s[16], c[16];
	int i;

	int seiyaku[16];

	if (scanf("%d%d", &N, &M) != 2) return 1;
	for (i = 0; i < M; i++) {
		if (scanf("%d%d", &s[i], &c[i]) != 2) return 1;
	}

	for (i = 0; i < N; i++) seiyaku[i] = -1;
	for (i = 0; i < M; i++) {
		if (seiyaku[s[i] - 1] < 0) {
			seiyaku[s[i] - 1] = c[i];
		} else {
			if (seiyaku[s[i] - 1] != c[i]) {
				puts("-1");
				return 0;
			}
		}
	}
	if (N > 1 && seiyaku[0] == 0) {
		puts("-1");
		return 0;
	}
	if (N == 1 && seiyaku[0] < 0) seiyaku[0] = 0;
	for (i = 0; i < N; i++) {
		putchar('0' + (seiyaku[i] < 0 ? (i == 0 ? 1 : 0) : seiyaku[i]));
	}
	putchar('\n');

	return 0;
}
