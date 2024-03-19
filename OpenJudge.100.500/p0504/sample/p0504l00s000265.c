#include <stdio.h>
int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	if (n >= m)
	{
		if (n % m) printf("%d", n / m + 1);
		else printf("%d", n / m);
	}
	else
	{
		printf("1");
	}
}