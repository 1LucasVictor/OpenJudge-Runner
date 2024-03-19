#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ((0 <= a) && (0 <= b) && (0 <= c) && (a <= 100) && (b <= 100) && (c <= 100))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}