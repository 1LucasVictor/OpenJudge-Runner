#include<stdio.h>

int main(void)
{
	unsigned long int a, b, c;
	

	scanf("%ld%ld", &a, &b);

	if ((a * 2 <= b) && (a * 4 >= b) && (b % 2 == 0)) {
		printf("Yes");

		return 0;
	}
	printf("No");

	return 0;
}