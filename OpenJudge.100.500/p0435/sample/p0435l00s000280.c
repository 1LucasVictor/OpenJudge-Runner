#include<stdio.h>
#include<math.h>
int main() {

	int n, d, x, y, i, count = 0, a;

	scanf("%d%d", &n, &d);

	for (i = 0; i < n; i++) {
		scanf("%d%d", &x, &y);

		a = x * x + y * y;

		if (d >= sqrt(a))
			count++;
	}

	printf("%d", count);
	
	return 0;
}