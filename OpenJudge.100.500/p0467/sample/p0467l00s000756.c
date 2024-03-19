#include<stdio.h>
#include<string.h>
int main() {

	int a, b, c, k, i, sum = 0;

	scanf("%d%d%d%d", &a, &b, &c, &k);

	for (i = 1; i <= k; i++) {
		if (a > 0) {
			sum++;
			a--;
		}
		else if (b > 0) {
			b--;
		}
		else {
			sum--;
		}
	}

	printf("%d", sum);

	return 0;
}