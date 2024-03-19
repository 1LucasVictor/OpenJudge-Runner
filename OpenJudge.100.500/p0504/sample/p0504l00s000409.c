#include <stdio.h>

int main() {
	int H, A;
	scanf("%d %d", &H, &A);
	printf("%d\n", (H-1)/A + 1);
	return 0;
}