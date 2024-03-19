#include<stdio.h>
int main()
{
	int k, a, b;
	scanf("%d%d%d", &k, &a, &b);
	if (a % k == 0 || b / k > a / k)
		printf("OK\n");
	else
		printf("NG\n");
	return 0;
}