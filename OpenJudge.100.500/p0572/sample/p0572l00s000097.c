#include<stdio.h>
int main()
{
	int l, r;
	scanf("%d %d", &l, &r);
	int i, j;
	int ans = 2020;
	for (i = l; i < l + 2500 && i < r; i++)
		for (j = i + 1; j < i + 2500 && j <= r; j++)
			if (ans > ((i % 2019) * (j % 2019)) % 2019)
				ans = ((i % 2019) * (j % 2019)) % 2019;
	printf("%d\n", ans);
	return 0;
}