#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);

	if (c >= b) {
		printf("0\n");
	} else if (a >= d) {
		printf("0\n");
	} else if (c >= a && d >= b) {
		printf("%d\n", b - c);
	} else if (a >= c && b >= d) {
		printf("%d\n", d - a);
	} else if (c >= a && b >= d) {
		printf("%d\n", d - c);
	} else if (a >= c && d >= b) {
		printf("%d\n", b - a);
	}

	return 0;
}
