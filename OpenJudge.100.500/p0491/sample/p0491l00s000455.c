#include<stdio.h>

int main(void)
{
	double a, b;
	double check = 0;

	scanf("%lf %lf", &a, &b);

	for (;;) {
		check = a - b;
		if (check < 0) {
			check = check * (-1);
		}

		if (a > check) {
			a = check;
		}

		else {
			printf("%ld", (long)a);
			break;
		}
	}

	return 0;
}