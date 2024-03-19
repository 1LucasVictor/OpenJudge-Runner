#include <stdio.h>

int main() {
	int n, i;
	double x1, y1, x2, y2, x3, y3, x4, y4, sol1, sol2;
	scanf("%d", &n);
	if (n >= 100) exit(1);
	for (i = 0; i < n; i++) {
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		sol1 = (y1 - y2) / (x1 - x2);
		sol2 = (y3 - y4) / (x3 - x4);
		if (sol1 == sol2)	printf("YES\n");
		else if (sol1 != sol2) printf("NO\n");
	}
	return 0;
}