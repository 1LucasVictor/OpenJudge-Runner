#include <stdio.h>

int main(void)
{
	int a, b, i;
	int count = 1;

	scanf("%d %d", &a, &b);

	if (b == a) //電源タップ一つで済む場合
	{
		printf("1\n");
		return 0;
	}
	else if (b == 1) //電源タップがいらない場合
	{
		printf("0\n");
		return 0;
	}

	//必要なタップ数をカウントする
	i = a;
	while (i < b)
	{
		i += (a - 1);
		count++;
	}

	printf("%d\n", count);

	return 0;
}