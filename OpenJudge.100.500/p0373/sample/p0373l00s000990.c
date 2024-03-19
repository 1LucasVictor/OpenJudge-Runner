#include <stdio.h>

int main(int argc, char** argv)
{
	int j, k, max_i, H, W, a[10000];

	int i = 0;
	while (1) {
		scanf("%d %d", &H, &W);
		if (H == 0 && W == 0) {
			break;
		}
		a[i * 2] = H;
		a[i * 2 + 1] = W;
		i++;
	}
	max_i = i;

	for (i = 0; i < max_i; i++) {
		for (j = 0; j < a[i * 2]; j++) {
			for (k = 0; k < a[i * 2 + 1]; k++) {
				if (j == 0 || j == a[i * 2] - 1) {
					printf("#");
				}
				else {
					if (k == 0 || k == a[i * 2 + 1] - 1) {
						printf("#");
					}
					else {
						printf(".");
					}
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}