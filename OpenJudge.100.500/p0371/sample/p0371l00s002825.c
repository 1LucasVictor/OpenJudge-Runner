#include <stdio.h>

int main(void)
{
	int n = 0;		//整数の個数
	int a[10000];	//数値を入れる配列
	int max = 0;	//最大値
	int min = 0;	//最小値
	long long sum = 0;	//合計
	int i = 0;

	//整数の数を入力する
	scanf("%d", &n);

	//整数を入力する
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	max = min = a[0];
	sum += a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
		sum += a[i];
	}

	printf("%d %d %ld\n", min, max, sum);

	return 0;
}
