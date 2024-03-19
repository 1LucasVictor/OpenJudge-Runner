#include <stdio.h>

int main() {
	int i,n;
	int str[100];

	scanf("%d", &n);

	for (i = 0;i < n;i++) {
		scanf("%d", &str[i]);
	}

	for (i = n - 1 ; 0 <= i; i--) {
		if (i != (n - 1)) printf(" ");
		printf("%d", str[i]);
	}
	printf("\n");

	return 0;
}