#include <stdio.h>

int main() {
	int H, A;
	int i = 0;
	scanf("%d%d", &H, &A);
	while (H > 0) {
		H = H - A;
		i++;
	}
	printf("%d", i);
	return 0;
}