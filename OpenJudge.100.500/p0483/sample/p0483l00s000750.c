#include <stdio.h>

int main(void)
{
	int n, tens, ones;

	scanf("%d", &n);

	tens = n % 100;
	ones = n % 10;

	if (699 < n && n < 800)
	{
		printf("Yes\n");
	}
	else if (69 < tens && tens < 80)
	{
		printf("Yes\n");
	}
	else if (ones == 7)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}