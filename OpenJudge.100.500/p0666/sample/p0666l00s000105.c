#include <stdio.h>

int main() {
	int x, a, b;

	scanf("%d", &x);
	scanf("%d", &a);
	scanf("%d", &b);

	int judge = b - a;

	if (judge <= 0)
		printf("delicious\n");
	else if (judge > 0  && judge <= x)
		printf("safe\n");
	else if (judge > x)
		printf("dangerous\n");
}