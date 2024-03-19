#include <stdio.h>
#include <string.h>

#define N 3

int main() {
	static int aa[N];
	int n, m, s, c, i;

	scanf("%d%d", &n, &m);
	if (n == 1 && m == 0) {
		printf("0\n");
		return 0;
	}
	memset(aa, -1, n * sizeof *aa);
	while (m--) {
		scanf("%d%d", &s, &c), s--;
		if ((s == 0 && c == 0) || (aa[s] != -1 && aa[s] != c)) {
			printf("-1\n");
			return 0;
		}
		aa[s] = c;
	}
	for (i = 0; i < n; i++)
		printf("%d", aa[i] != -1 ? aa[i] : i == 0 ? 1 : 0);
	printf("\n");
	return 0;
}
