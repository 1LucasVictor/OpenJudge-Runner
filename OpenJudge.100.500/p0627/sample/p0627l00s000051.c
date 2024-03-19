#include <stdio.h>

int main () {
	int x, y;
	int sum, sub, mult;
	scanf("%d %d", &x, &y);
	sum = x + y;
	sub = x - y;
	mult = x * y;
	if (sub < mult && mult < sum) {
		printf("%d\n", sum);
	}
	else if (sum < mult && sub < mult) {
		printf("%d\n", mult);
	}
	else{
		printf("%d\n", sub);
	}
	return 0;
}