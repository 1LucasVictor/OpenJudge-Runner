#include <stdio.h>

int max(int a, int b) {
	int c;
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	while (1) {
		c = a % b;
		if (c == 0) {
			return b;
		}
		a = b;
		b = c;
	}
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", max(a, b));
	return 0;
}
