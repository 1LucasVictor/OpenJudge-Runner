#include<stdio.h>
int main() {
	int n, d;
	int p, q;
	int x = 0;
	scanf("%d%d", &n, &d);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &p, &q);
		if (p*p + q * q <= d * d) {
			x++;
		}
	}
	printf("%d\n", x);
	return 0;
}