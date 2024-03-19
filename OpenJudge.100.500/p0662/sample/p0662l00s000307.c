#include <stdio.h>

int main()
{
	int a, b, c, d;
	int start, end;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a < c)
	{
		start = c;
	}
	else
	{
		start = a;
	}
	if (b < d)
	{
		end = b;
	}
	else
	{
		end = d;
	}
	if (start < end)
	{
		printf("%d", end - start);
	}
	else
	{
		printf("0");
	}
	return 0;
}