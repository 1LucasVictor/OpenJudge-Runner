#include <stdio.h>

int main(void) {
	int n;
	int a[101] = {0};
	int i;
	scanf("%d",&n);

	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; ++i) {
		printf("%d", a[n-i-1]);
		if (i != n-1) {
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}