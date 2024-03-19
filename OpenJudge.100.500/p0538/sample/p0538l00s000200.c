#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, seki = 0;
	scanf("%d%d", &a, &b);
	seki = a * b;
	if (a <= 9 && b <=9) {
		printf("%d", seki);
	}
	else {
		printf("-1");
	}

	return 0;
}
