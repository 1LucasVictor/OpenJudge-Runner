#include<stdio.h>
int main(void) {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a == 7 || b == 7 || c == 7) {
		if ((a == 5 && b == 5) || (b == 5 && c == 5) || (c == 5 && a == 5)) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");

	return 0;
}