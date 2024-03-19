#include <stdio.h>

int main(void) {
	int n,a,b,sum;
	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &b);
	sum = n * a;
	if (sum < b) {
		printf("%d", sum);
	}
	else {
		printf("%d", b);
	}
}