#include<stdio.h>

int main() {
	int i, j, k;
	int	n, m, h, w, g, a, b, c, d;
	int f = 0;

	scanf("%d %d %d", &n, &a, &b);

	if (n*a < b) {
		m = n * a;
	}
	else {
		m = b;
	}

	printf("%d",m);


	return 0;
}