#include <stdio.h>
int main(void)
{
	int a, b, c, i, j, k;
	k = 0;

	scanf("%d %d %d", &a, &b, &c);

	if ((1 <= a) && (1 <= b) && (1 <= c) && (a <= 10000) && (b <= 10000) && (c <= 10000) && (a <= b))
	{
		for (i = a;i < b; i = i + 1)
		{
			j = c % i;
			if (j == 0)
			{
				k = k + 1;
			}
		}
	}
	printf("%d\n",k);
	return 0;
}