#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void) {
	long long int n, d, i, c = 0;
	double x, y, z;

	scanf("%lld %lld", &n, &d);

	for (i = 0; i < n; i++) {
		scanf("%lf %lf", &x, &y);
		
		z = x * x + y * y;
		z = sqrt(z);

		if (z <= d) {
			c++;
		}
	}
	printf("%d", c);
}