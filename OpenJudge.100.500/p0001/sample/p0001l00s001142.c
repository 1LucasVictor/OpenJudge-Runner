#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF) {
		printf("%d\n", 1 + (int)log10((double)(a + b)));
	}
	return 0;
}