#include <stdio.h>

int main(void)
{
	int n, i, j = 0;
	int a[1001],e[1001];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0) {
			e[i] = a[i];
			j++;
		}
	}

	for (i = 0; i < j; i++) {
		if (e[i] % 3 != 0 && e[i] % 5 != 0) {
			printf("DENIED\n");
			return 0;
		}
	}

	printf("APPROVED\n");

	return 0;
}