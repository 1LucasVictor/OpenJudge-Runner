#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int ans = 0, now = 1;
	while (now < b)
	{
		ans++;
		now += a - 1;
	}
	printf("%d\n", ans);
	return 0;
}