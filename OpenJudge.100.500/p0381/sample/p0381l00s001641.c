#include<stdio.h>

int main(void) {
	
	int n, x;
	int count=0;

	while(1){

		(void)scanf("%d %d", &n, &x);

		if (n == 0 && x == 0) {
			break;
		}
	    count = 0;

		for (int i = 1; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n + 1; k++) {
					if (i + j + k == x) {
						count += 1;
					}
				}
			}
		}



		printf("%d\n", count);
	}
	return 0;
}
