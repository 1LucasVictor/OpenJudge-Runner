#include <stdio.h>
int main(void) {
	int n, a;
	scanf("%d", &n);
	if (n % 2 == 0) {
		printf("%d", n / 2);
	}
	else {
		printf("%d", n / 2 + 1);
	}
}
