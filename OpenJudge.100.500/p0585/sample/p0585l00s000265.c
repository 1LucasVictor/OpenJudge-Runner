#include <stdio.h>

int main() {

	int A, B, T, i, ans=0;

	scanf("%d %d %d", &A, &B, &T);

	
	for (i = A; i <= T; i=i+A) {
		ans = ans + B;
	}
	
	printf("%d", ans);

	return 0;
}