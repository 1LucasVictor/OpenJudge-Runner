#include<stdio.h>
int main() {
	int A, B, red;
	scanf("%d %d", &A, &B);
	red = B % A;
	if (red == 0) {
		printf("%d", A + B);
	}
	else {
		printf("%d", B - A);
	}
	return 0;
}