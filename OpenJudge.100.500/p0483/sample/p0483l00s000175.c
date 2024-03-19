#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	int a = n / 100;
	int b = n / 10 % 10;
	int c = n % 10;

	if (a == 7 || b == 7 || c == 7)
		printf("Yes");
	else
		printf("No");
	return 0;
}