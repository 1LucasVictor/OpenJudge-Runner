#include <stdio.h>

int main(void)
{
	int h, a;
	int atk = 0;

	scanf("%d%d", &h, &a);

	while (h > 0)
	{
		h -= a;
		atk++;
	}

	printf("%d", atk);

	return 0;
}