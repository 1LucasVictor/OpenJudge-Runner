#include <stdio.h>

int main(void)
{
	int a, b, i;
	int count = 0;

	scanf("%d %d", &a, &b);

	//電源タップと同数必要なら1を出力する
	i = a;
	if (i == b) {
		printf("1\n");
		return 0;
	}

	//必要なタップ数をカウントする
	while (i < b)
	{
		i = i + (a * count - 1);
		count = count + 1;
	}

	printf("%d\n", count);

	return 0;
}