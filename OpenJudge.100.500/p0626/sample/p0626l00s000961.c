#include <math.h>
#include <stdio.h>

int main() {
	int d, n;

	scanf("%d%d", &d, &n);
	printf("%d\n", n * (int) pow(10, d * 2));
	return 0;
}
