
#include <stdio.h>
#include <unistd.h>

int main()
{
	int		ans;
	int		n;
	long	d;
	long	x,y;

	ans = 0;
	scanf("%d %ld", &n, &d);
	while (n)
	{
		scanf("%ld %ld", &x, &y);
		if (((x*x) + (y*y)) <= (d*d))
			ans++;
		n--;
	}
	printf("%d", ans);
}