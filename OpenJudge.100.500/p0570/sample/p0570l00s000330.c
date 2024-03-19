#include<stdio.h>
int main(void)
{
	int x, y, k;
	scanf("%d %d", &x, &y);
	printf("\n");

	k = (x + y) / 2;
	if ((x+y) % 2 == 0)
	{
		printf("%d", k);
	}
	else
	{
		printf("IMPOSSIBLE");
	}
	return 0;
}