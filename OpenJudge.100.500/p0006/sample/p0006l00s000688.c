/*--- AOJ 0007 ---*/

#include<stdio.h>

#define  NUM  100

int main(void)
{
	int n;
	int i;
	long x = 100000;
	long y;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		x = x * 1.05;

	y = x;

	y = y / 1000;

	y = y % 10;

	if (y > 0)
		x = (x / 10000) * 10000 + 10000;
	else
		x = (x / 10000) * 10000;

	printf("%d\n", x);

	return (0);
}