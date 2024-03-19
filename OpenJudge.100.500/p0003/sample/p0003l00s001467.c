#include <stdio.h>

void solve(float *x, float *y, int a, int b, int p, int c, int d, int q)
{
	int den = (a * d - b * c);
	*x = (d * p - b * q) / den;
	*y = (((-1) * c) * p + a * q) / den;
}
int main(void)
{
	int a, b, p, c, d, q;
	float x, y;
	while (scanf("%d %d %d %d %d %d", &a, &b, &p, &c, &d, &q) != EOF) {
		solve(&x, &y, a, b, p, c, d, q);
		printf("%.3f %.3f\n", x, y);
	}
	return (0);
}