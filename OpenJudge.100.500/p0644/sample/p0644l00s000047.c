#include <stdio.h>
int main(void)
{
	int c;
	c = getchar() - '0';
	c += getchar() - '0';
	c += getchar() - '0';
	printf("%d\n", c);
}