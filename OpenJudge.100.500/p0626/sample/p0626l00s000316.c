#include <stdio.h>

int main(int argc, char** argv) {
	int i = 0;
	int ans = 1;
	int d, n;
	scanf("%d %d", &d, &n);

	if (d == 0) {
		if (n == 100) {
			ans = 101;
		} else  {
			ans = n * 1;
		}

		printf("%d\n", ans);
		return 0;
	} else if (d == 1) {
		if (n == 100) {
			ans = 10100;
		} else {
			ans = n * 100;
		}
		printf("%d\n", ans);
		return 0;
	} else {
		if (n == 100) {
			ans = 1010000;
		} else {
			ans = n * 10000;
		}
		printf("%d\n", ans);
		return 0;
	}
	
	return 0;
}