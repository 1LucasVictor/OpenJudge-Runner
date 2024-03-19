#include <stdio.h>

int main(void)
{
	char a, b, c;
	int sum;

	scanf("%c%c%c", &a, &b, &c);
	sum = (a - 48) + (b - 48) + (c - 48);

	printf("%d", sum);

	return 0;
}