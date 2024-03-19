#include <stdio.h>

int main(void)
{
	int a, b, k;
	scanf("%d", &k);

	scanf("%d %d", &a, &b);

	if ((b / k) * k  >= a || k == 1)
	{
		printf("OK");
	}
	else
	{
		printf("NG");
	}

	return 0;
}