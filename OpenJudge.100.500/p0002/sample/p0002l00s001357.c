#include<stdio.h>

int main(void) {
	int n;
	int a, b, c;
	scanf("%d", &n);
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}

	}
	return 0;
}