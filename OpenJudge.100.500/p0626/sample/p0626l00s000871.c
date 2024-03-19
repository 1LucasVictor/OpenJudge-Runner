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
	} else if (d == 1) {
		ans = 100;
		ans *= n;
		printf("%d\n", ans);
		return 0;
	} else {
		ans = 10000;
		ans *= n;
		printf("%d\n", ans);
		return 0;
	}
	return 0;
}