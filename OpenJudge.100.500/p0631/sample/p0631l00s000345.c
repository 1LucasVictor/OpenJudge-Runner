#include <stdio.h>
#include <math.h>

int min(int a, int b) {
	if(a > b) return b;
	return a;
}

int max(int a, int b) {
	if(a > b) return a;
	return b;
}

int main() {
	//char buffer[128];
	//scanf("%s", buffer);
	int A, B, X;
	scanf("%d %d %d", &A, &B, &X);
	if(A == X) {
		printf("YES\n");
		return 0;
	}
	if(A > X) {
		printf("NO\n");
		return 0;
	}

	if(X <= A + B) {
		printf("YES\n");
		return 0;
	}

	printf("NO\n");
	return 0;
}
