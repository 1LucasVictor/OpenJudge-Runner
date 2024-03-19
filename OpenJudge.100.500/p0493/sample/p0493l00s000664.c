#include <stdio.h>

int		main()
{
	int		X;
	int		ans;

	ans = 0;
	scanf("%d\n", &X);
	if (X >= 500)
	{
		ans = (X / 500) * 1000;
		X %= 500;
	}
	if (X >= 5)
		ans += (X / 5) * 5;
	printf("%d\n", ans);
	return (0);
}
