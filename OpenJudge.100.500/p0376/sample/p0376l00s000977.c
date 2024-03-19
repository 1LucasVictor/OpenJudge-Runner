#include<stdio.h>

int main() {
	int n,i,a[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[n-i-1]);
	}
	for (i = 0; i < n - 1; i++) {
		printf("%d ", a[i]);
	}
	printf("%d\n", a[n - 1]);
	return 0;
}