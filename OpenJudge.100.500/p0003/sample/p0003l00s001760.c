#include <stdio.h>
int main (void)
{
	int a, b, c, d, e, f;
	double  x, y;
	while (1) {
		if (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) == EOF)
			break;
		if (a > d && a != 0 && b != 0) {
			y = (c - f * (a/d)) / (b - e * (a/d));
			x = (c - b * y) / a;
		} else if (d > a && a != 0 && d != 0) {
			y = (f - c * (d/a)) / (e - b * (d/a));
			x = (c - b * y) / a;
		} else {
			continue;
		}
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}