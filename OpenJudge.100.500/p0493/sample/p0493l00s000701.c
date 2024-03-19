#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	printf("%d\n", x / 500 * 1000 + (x % 500) / 5 * 5);
	return 0;
}