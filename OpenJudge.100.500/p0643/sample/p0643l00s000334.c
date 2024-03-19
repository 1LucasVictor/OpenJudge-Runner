#include <stdio.h>
int main()
{
	int a,b,M;
	scanf("%d %d", &a, &b);
	M = a*b;
	if (M % 2 == 0)
	{
		printf("Even\n");
	}
	else
	{
		printf("Odd\n");
	}
	return 0;
}