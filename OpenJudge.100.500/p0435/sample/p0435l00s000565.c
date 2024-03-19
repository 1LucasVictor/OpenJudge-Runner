#include<stdio.h>
#include<math.h>
int main() {

	int n, d, x, y, i, count = 0;
	long long int xx, yy, a;

	scanf("%d%d", &n, &d);

	for (i = 0; i < n; i++) {
		scanf("%d%d", &x, &y);
		if (d < abs(x) || d < abs(y))
			continue;
		xx = x * x;
		yy = y * y;
		a = xx + yy;

		if (d >= sqrt(a))
			count++;
	}

	printf("%d", count);

	return 0;
}