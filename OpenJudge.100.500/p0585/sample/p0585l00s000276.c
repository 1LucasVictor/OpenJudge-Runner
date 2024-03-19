#include <stdio.h>
int main(void) {
	int a, b, t, n=0;
	scanf("%d %d %d", &a, &b, &t);
	if (0 <= a || a <= 20 || 0 <= b || b <= 20 || 0 <= t || t <= 20) {
		if (a < t) {
			for (int i = a; i <= t; i = i + a) {
				n = n + b;
			}
		}
		else {
			n = 0;
		}
	}
	printf("%d", n);
	return 0;
}