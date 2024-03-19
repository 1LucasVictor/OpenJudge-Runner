#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);

	if (1 <= a && a <= 9) //Aが1以上9以下のとき
	{
		if (1 <= b && b <= 9) //Bが1以上9以下のとき（条件と一致）
		{
			printf("%d\n", a * b);
		}
		else //Aのみ一致
		{
			printf("-1\n");
		}
	}
	else //A Bどちらも一致しない
	{
		printf("-1\n");
	}

	return 0;
}