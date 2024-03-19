#include<stdio.h>

int main(void) {

	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	if (a >= 1 && a <= 9) {
		if (b >= 1 && b <= 9) {
			printf("%d", a * b);

		}
		else {
			printf("-1");
		}

	}
	else {
		printf("-1");

	}
	return 0;
}