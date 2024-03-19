#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a - b >= c) //容器1に容器2の水すべてが入る場合
	{
		printf("0\n");
	}
	else //容器2に水が残る場合
	{
		printf("%d\n", c - (a - b));
	}

	return 0;
}