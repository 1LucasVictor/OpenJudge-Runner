#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void) {
	int n, d, i, c = 0;
	float x, y, z;

	scanf("%d %d", &n, &d);

	for (i = 0; i < n; i++) {
		scanf("%f %f", &x, &y);
		
		z = x * x + y * y;
		z = sqrtf(z);

		if (z <= d) {
			c++;
		}
	}
	printf("%d", c);
}