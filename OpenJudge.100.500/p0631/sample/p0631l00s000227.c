#include<stdio.h>
int main() {
	int a, b, X = 0;
	scanf("%d %d %d", &a, &b, &X);
	if (a + b >= X && a <= X) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}
