#include <stdio.h>

int main(void)
{
	int a, b, i;
	int count = 0;

	scanf("%d %d", &a, &b);


	i = a;
	//必要なタップ数をカウントする
	while (i < b)
	{
		i = i + (a * count - count);
		count++;
	}

	printf("%d\n", count);

	return 0;
}