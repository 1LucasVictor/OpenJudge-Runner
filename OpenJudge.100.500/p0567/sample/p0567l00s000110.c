#include <stdio.h>
int main() {
	int A, B, C,i;
	scanf("%d %d %d",&A, &B, &C);
	for (i = 0; i <C; i++) {
		if (B + i >= A)
			break;
	}
	printf("%d", C - i);
	return 0;
}
	