#include<stdio.h>
int main(void)
{
	int n, a, b;
	scanf("%d%d%d", &n, &a, &b);
	a = a * n;
	if (a > b)
		printf("%d\n", b);
	else
		printf("%d\n", a);
	return 0;
}