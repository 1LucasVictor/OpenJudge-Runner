#include <stdio.h>
#include <math.h>

int main(void)
{
	int d, n;

	scanf("%d%d", &d, &n);
	printf("%.f\n", pow(100, d) * n + (n == 100));

	return 0;
}
