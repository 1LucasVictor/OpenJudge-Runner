#include<stdio.h>

int main(void) {

	int i, j, k, n, x;
	

	while(1) {

		scanf("%d %d", &n, &x);
		int count = 0;
		if (n == 0 && x == 0)
			break;

		for (i = 1; i <= n - 2; i++) {
			for (j = 2; j <= n - 1; j++) {
				for (k = 3; k <= n; k++) {

					if (x == i + j + k && i < j && j < k)

						count++;
					
				}
			}
		}

		printf("%d\n", count);

	} 
	
	return(0);

}
