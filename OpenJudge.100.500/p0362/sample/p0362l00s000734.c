#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	scanf("%d %d %d", &a, &b, &c);

	if (a<b<c)
	{
		printf("Yes\n");

		return 0;

	}

	else

	printf("No\n");


	return 0;
}