#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, k;
	scanf("%d\n%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e, &k);
	if (e - a > k)
	{
		printf(":(");
	}
	else
	{
		printf("Yay!");
	}
}