#include<stdio.h>

int main() {
	int n,i;
	int a[101],b[101];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		b[i] = a[n - i - 1];
		printf("%d", b[i]);
		if (i != n-1) {
			printf(" ");
		}
	}

	printf("\n");
	return 0;
}
