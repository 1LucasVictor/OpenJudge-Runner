#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int H;
	int A;

	scanf("%d %d\n", &H, &A);

	if(H < 1 || 10000 < H) {
		return 1;
	}
	if(A < 1 || 10000 < A) {
		return 1;
	}

	printf("%d\n", H/A + 1);
	return 0;
}