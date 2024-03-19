#include <stdio.h>

int main(void)
{
	int n, i;

	scanf("%d", &n);

	i = n / 2;

	if (n % 2 >= 1) //片面印刷が出る場合をカウントする
	{
		i = i + 1;
	}

	printf("%d\n", i);

	return 0;
}