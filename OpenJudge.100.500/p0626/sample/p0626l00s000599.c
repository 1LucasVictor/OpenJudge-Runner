#include <stdio.h>

int main(int argc, char** argv) {
	int i = 0;
	int ans = 1;
	int d, n;
	scanf("%d %d", &d, &n);

	if (d == 0) {
		ans = n;
		printf("%d\n", ans);
		return 0;
	}

	for (i = 0; i < d; i++) {
		ans *= 100;
	}
	ans *= n;
	printf("%d\n", ans);
	return 0;
}