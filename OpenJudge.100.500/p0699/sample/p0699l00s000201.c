#include<stdio.h>
int main(void) {
	int a, b, c, d;
	scanf("%d%d%d", &a, &b, &c);
	d = 0;
	if (a + b + c == 17) {
		if (a == 5 || a == 7) {
			if (b == 5 || b == 7) {
				if (c == 5 || c == 7) {
					d = 1;
				}
			}
		}
	}
	if (d == 1) {
		printf("YES\n");
	}
	else printf("NO\n");
	return 0;
}