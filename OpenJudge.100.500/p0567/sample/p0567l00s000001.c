#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a < b + c)
		printf("%d\n", c - (a - b));
	else
		printf("%d\n", 0);

	return 0;
}