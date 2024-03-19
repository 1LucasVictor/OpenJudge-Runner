#include<stdio.h>

int main() {
	int n, sb = 0, sc = 0, a[101], b[101], c[101];
	for (int i = 0; i < 101; i++) {
		b[i] = 0;
		c[i] = 0;
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			b[i] = 1;
			if (a[i] % 3 == 0||a[i]%5==0) {
				c[i] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		sb = sb + b[i];
		sc = sc + c[i];
	}
	if (sb == sc) {
		printf("APPROVED");
	}
	else {
		printf("DENIED");
	}
}