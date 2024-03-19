#include <stdio.h>

int main(void) {
	int n, a, b;
	scanf("%d%d%d", &n,&a,&b);
	if (a <= b) {
		printf("%d", a*n);
	}
	else {
		printf("%d", b*n);
	}
	return 0;
}