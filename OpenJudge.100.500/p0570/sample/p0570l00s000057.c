#include<stdio.h>

int main()
{
	int a, b, res;
	scanf("%d %d", &a, &b);

	if(abs(b-a) % 2 == 0)
	{
		res = abs(b - a) / 2;
		if (a < b) res = a + res;
		else res = b + res;
		printf("%d", res);
	}

	else
	{
		printf("IMPOSSIBLE\n");
	}
}
