#include<stdio.h>

int main(void)
{
	unsigned long int a, b, c;
	int i;

	scanf("%ld", &a);

	for (i = 0; 3 > i; i++) {
		if (7 == a % 10) {
			printf("Yes");

			return 0;
		}

		a = a / 10;
	}

	printf("No");

	return 0;
}