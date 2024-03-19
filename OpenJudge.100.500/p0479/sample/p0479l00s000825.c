#include<stdio.h>

int main(void) {
	int n, i;
	int a[100000];
	int buka[100000] = { 0 };

	scanf("%d", &n);

	for (i = 0; i < n - 1; i++) {
		scanf("%d", &a[i]);
	}


	for (i = 0; i < n - 1; i++) {
		buka[a[i] - 1]++;
	}

	for (i = 0; i < n; i++) {
		printf("%d\n", buka[i]);
	}

	return 0;
}