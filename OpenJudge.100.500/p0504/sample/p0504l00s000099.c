#include <stdio.h>

int main(void)
{
	int h, a;
	int aCount = 0;

	scanf("%d%d", &h, &a);

	/* モンスターの体力が0以下になるまで、攻撃回数を数える */
	while (h > 0)
	{
		h -= a;
		aCount++;
	}

	printf("%d", aCount);

	return 0;
}