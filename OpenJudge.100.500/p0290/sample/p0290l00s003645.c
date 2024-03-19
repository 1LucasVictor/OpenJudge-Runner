#include<stdio.h>

int main(void)
{
	int i, j, n,d = 0, v;
	int sosuu = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &j);

		d = 0;
		for (v = 2; v <= j; v++){
			if ((j % v) == 0) {
				d++;
				if (d == 2)
					break;
			}
		}
			if (d == 1) {
				sosuu++;
			}
	}

	

	printf("%d\n", sosuu);
	return 0;
}
