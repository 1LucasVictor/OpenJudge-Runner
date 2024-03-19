#include <stdio.h>
#include <math.h>

#define SIZE (1000000)

int main(void) {
	int num[SIZE] = {1, 1};
	int i, j, e, f, n, d, c;
	
	e = (int)sqrt(SIZE);
	for (i = 2; i <= e; i++) {
		if (!num[i]) {
			f = SIZE / i;
			for (j = 2; j < f; j++) {
				num[i * j] = 1;
			}
		}
	}
	
	c = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &d);
		if (d < SIZE) {
			if (!num[d]) {
				c++;
			}
		} else {
			for (j = 2; j < SIZE; j++) {
				if (!num[j]) {
					if ((d % j) == 0) {
						break;
					}
				}
			}
			if (j == SIZE) {
				e = (int)sqrt(d);
				if ((j % 2) == 0) {
					j++;
				}
				for (; j <= e; j += 2) {
					if ((d % j) == 0) {
						break;
					}
				}
				if (j == e) {
					c++;
				}
			}
		}
	}
	printf("%d\n", c);

	return 0;
}