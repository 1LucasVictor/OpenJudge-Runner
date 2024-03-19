#include <stdio.h>
#include <unistd.h>

int main()
{
	int		ans;
	int		n;
	int		d;
	int		x,y;

	ans = 0;
	scanf("%d %d", &n, &d);
	while (n)
	{
		scanf("%d %d", &x, &y);
		if (((x*x) + (y*y)) <= (d*d))
			ans++;
		n--;
	}
	printf("%d", ans);
}