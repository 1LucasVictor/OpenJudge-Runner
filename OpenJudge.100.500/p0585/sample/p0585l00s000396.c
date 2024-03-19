#include <stdio.h>

int main() {
	int n, sum = 0, a, b;
	double t;

	scanf("%d %d %lf", &a, &b, &t);
	t += 0.5;

	for (n = a; n < t;n += a) {
		sum += b;
	}
	printf("%d\n", sum);

	return 0;
}