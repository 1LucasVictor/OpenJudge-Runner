#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a%2 == b%2) {
		printf("%d", (a+b)/2);
	}else {
		printf("IMPOSSIBLE");
	}
	return 0;
}