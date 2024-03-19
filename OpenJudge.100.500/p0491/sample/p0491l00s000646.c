#include<stdio.h>

int main(void)
{
	long a, b;
	long check = 0;

	scanf("%d %d", &a, &b);

	a = a % b;

	for (;;) {
		check = a - b;
		if (check < 0) {
			check = check * (-1);
		}

		if (a > check) {
			a = check;
		}

		else {
			printf("%d", a);
			break;
		}
	}

	return 0;
}