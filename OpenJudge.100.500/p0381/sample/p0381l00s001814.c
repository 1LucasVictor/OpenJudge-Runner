#include<stdio.h>

int main(void) {

	int i, j, k, n, x;
	int count = 0;

	do {

		scanf("%d %d", &n, &x);



		for (i = 1; i < n - 2; i++) {
			for (j = 2; j < n - 1; j++) {
				for (k = 3; k <= n; k++) {

					if (x == i + j + k && i < j && j < k) {

						count++;
					}
				}
			}
		}
		printf("%d\n", count);

	} while (n == 0 && x == 0);
	
	return(0);

}
