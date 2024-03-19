#include <stdio.h>

int main(void) {
	int X;
	if (scanf("%d", &X) != 1) return 1;
	puts(X >= 30 ? "Yes" : "No");
	return 0;
}
