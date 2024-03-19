#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	puts(a - b == -1 || a - b == 0 || a - b == 1 ? "Yay!" : ":(");
	return 0;
}