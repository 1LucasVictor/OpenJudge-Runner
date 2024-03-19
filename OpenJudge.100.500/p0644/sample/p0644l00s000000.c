#include <stdio.h>

int main() {
	int n, cnt;

	scanf("%d", &n);
	cnt = 0;
	while (n > 0) {
		if (n % 10 == 1)
			cnt++;
		n /= 10;
	}
	printf("%d\n", cnt);
	return 0;
}
