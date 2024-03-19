#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0;
	scanf("%d", &n);

	int* data = (int *)malloc(sizeof(int) * 10);
	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}

	for (int i = n - 1; -1 < i; i--) {
		printf("%d", data[i]);
		if (i == 0) {
			printf("\n");
		}else{
			printf(" ");
		}
	}

	free(data);
	return 0;
}