#include <stdio.h>
#include <string.h>

#define N 3

int main() {
	static int aa[N];
	int n, m, s, c, i;

	scanf("%d%d", &n, &m);
	memset(aa, -1, n * sizeof *aa);
	while (m--) {
		scanf("%d%d", &s, &c), s--;
		if (aa[s] != -1 && aa[s] != c) {
			printf("-1\n");
			return 0;
		}
		aa[s] = c;
	}
	if (aa[0] != 0) {
		for (i = 0; i < n; i++)
			printf("%d", aa[i] != -1 ? aa[i] : i == 0 ? 1 : 0);
		printf("\n");
	} else
		printf("-1\n");
	return 0;
}
