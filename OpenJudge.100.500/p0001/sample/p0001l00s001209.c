#include <stdio.h>

int main(void)
{
	int a, b;
	int d;

	while (~scanf("%d %d", &a, &b)){
		d = log10(a + b) + 1;
		printf("%d\n", d);
	}
	return (0);
}