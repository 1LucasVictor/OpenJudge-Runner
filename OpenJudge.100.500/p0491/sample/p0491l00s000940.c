#include<stdio.h>

int main(void)
{
	long int a, b;
	long int check = 0;

	scanf("%ld %ld", &a, &b);

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
			printf("%ld", a);
			break;
		}
	}

	return 0;
}