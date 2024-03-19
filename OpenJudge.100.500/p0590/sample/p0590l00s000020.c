#include <stdio.h>

int main() {
	static int aa[5];
	int k, i, j;

	for (i = 0; i < 5; i++)
		scanf("%d", &aa[i]);
	scanf("%d", &k);
	for (i = 0; i < 5; i++)
		for (j = i + 1; j < 5; j++)
			if (aa[j] - aa[i] > k) {
				printf(":(\n");
				return 0;
			}
	printf("Yay!\n");
	return 0;
}
