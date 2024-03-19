#include <stdio.h>

int main(void)
{
	int a, b, c, tmp;
	int flag = 1;

	scanf("%d %d %d", &a, &b, &c);

	while (flag) {
		flag = 0;
		if (a > b) {
			tmp = a;
			a = b;
			b = tmp;
			flag = 1;
		}

		if (b > c) {
			tmp = b;
			b = c;
			c = tmp;
			flag = 1;
		}
	}

	printf("%d %d %d\n", a, b, c);
	return 0;
}