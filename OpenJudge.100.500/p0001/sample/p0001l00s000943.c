#include <stdio.h>
int main(void) {
	int a, b, i, sum;
	
	while (scanf("%d %d", &a, &b)!= EOF) {
		i = 0;
		sum = a + b;
		while (sum != 0) {
			i++;
			sum /= 10;
		}
		printf("%d\n", i);

	}

	return 0;
}