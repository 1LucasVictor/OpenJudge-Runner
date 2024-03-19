#include<stdio.h>

int main(void)
{
	int a, b, c;


	scanf("%d%d", &a, &b);

	c = b % a;


	if (c == 0)
	{
		printf("%d", a + b);
	}
	else
	{
		printf("%d", b - a);

	}

	return 0;


}