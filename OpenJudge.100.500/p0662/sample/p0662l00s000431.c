#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	if (scanf("%d%d%d%d", &a, &b, &c, &d) == 4) {
		if ((0 <= a && a <= 100) && (0 <= b && b <= 100) && (a < b)
			&& (0 <= c && c <= 100) && (0 <= d && d <= 100) && (c < d)
			) {
			int sum = 0;

			if (a <= c) {
				if (c <= b) {
					if (b <= d) {
						sum = b - c;
					} else {
						sum = d - c;
					}
				}
			} else {
				if (a <= d) {
					if (d <= b) {
						sum = d - a;
					} else {
						sum = b - a;
					}
				}
			}
			printf("%d\n", sum);
		}
	}

	return 0;
}