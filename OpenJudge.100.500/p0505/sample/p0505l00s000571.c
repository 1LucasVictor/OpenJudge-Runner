#include <stdio.h>

int main(void)
{
	int h, n, a;
	int sum = 0;
	int i[10000];

	scanf("%d %d", &h, &n);

	for (a = 0; a < n; a++) {
		scanf("%d", &i[a]);
		sum = sum + i[a];//必殺技の合計値を求める
	}

	if (h < sum) //必殺技の合計値より敵の体力が低い場合
	{
		printf("Yes\n");
	}
	else //必殺技の合計値より敵の体力が多い場合
	{
		printf("No\n");
	}

	return 0;
}