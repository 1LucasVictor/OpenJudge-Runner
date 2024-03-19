#include <stdio.h>

int main() {
	
	int a, b, t;
	int i = 1;
	int sum = 0;

	scanf("%d %d %d", &a, &b, &t);
	while (i * a <= (double)t + 0.5) {
		sum += b;
		i++;
	}
	printf("%d", sum);

	return 0;
}