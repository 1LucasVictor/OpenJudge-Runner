#include <stdio.h>

int main(void) {
	int a, b, c, i=1, count = 0;
	scanf("%d%d%d", &a, &b, &c);
	for (;;) {
		if (a%i == 0 && b%i == 0) {
			count++;
		}
		if (count == c) {
			break;
		}
		i++;
	}
	printf("%d", i);
	return 0;
}