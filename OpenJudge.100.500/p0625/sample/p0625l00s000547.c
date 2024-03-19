#include <stdio.h>

int main()
{
	int a, b;
	int diff, space;

	scanf("%d%d", &a, &b);
	if (a >= b) {
		diff = a - b;
		space = 16 - b * 2;
	} else {
		diff = b - a;
		space = 16 - a * 2;
	}

	if ((space - 1) / 2 + 1 >= diff) {
		printf("Yay!\n");
	} else {
		printf(":(\n");
	}


	return 0;
}
