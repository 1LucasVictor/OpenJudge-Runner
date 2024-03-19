#include <stdio.h>

int main(void)
{
	int a, b, ans;
	scanf("%d %d", &a, &b);

	if (b != 1)
	{
		ans = 1;
		if ((b - a) % (a - 1) == 0)
			ans += (b - a) / (a - 1);
		else
			ans += (b - a) / (a - 1) + 1;
	}
	else
		ans = 0;
	printf("%d\n", ans);
	return 0;
}
