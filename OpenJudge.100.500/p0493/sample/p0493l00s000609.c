#include <stdio.h>

int main() {
	int i,b500,b5,ans;
	double a500, a5;
	scanf("%d", &i);
	a500 = i / 500;
	b500 = a500;
	a5 = (i - b500*500) / 5;
	b5 = a5;

	ans = 1000 * b500 + 5 * b5;
	printf("%d", ans);

	return 0;
}