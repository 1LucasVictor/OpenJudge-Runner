#include <stdio.h>

int main() {
	int H,A;
	scanf("%d %d", &H, &A);
	printf("%d\n", (H+A-1)/A);
	return 0;
}