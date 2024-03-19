#include <stdio.h>

int main()
{
	int s;
	scanf("%d", &s);
	printf("%d\n", s / 100 + s / 10 % 10 + s % 10);
	fflush(stdout);
	return 0;
}