#include <stdio.h>

int main () {
	int x, y;
	int sum, sub, mult;
	scanf("%d %d", &x, &y);
	sum = x + y;
	sub = x - y;
	mult = x * y;
	if (sum > sub && sum > mult) {
		printf("%d\n", sum);
	}
	else if (mult > sub && mult > sum) {
		printf("%d\n", mult);
	}
	else{
		printf("%d\n", sub);
	}
	return 0;
}