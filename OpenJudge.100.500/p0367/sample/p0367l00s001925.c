#include <stdio.h>

int main(void)
{
	int a, b, c, ans = 0;

	scanf("%d %d %d", &a, &b, &c);

	for (a; a <= b; a++) {
		if (c%a == 0) {
			ans++;
		}
	}

	printf("%d\n", ans);

	return 0;
}