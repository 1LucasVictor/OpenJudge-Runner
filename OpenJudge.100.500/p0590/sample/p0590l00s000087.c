#include <stdio.h>

int main() {

	int	ANT[5],k,i,j,a=0;

	for (i = 0; i < 5; i++) {
		scanf("%d", &ANT[i]);
	}

		scanf("%d", &k);

		for (i = 0; i < 4; i++) {
			for (j = 1; j < 5; j++) {
				if (ANT[j] - ANT[i] >= k) {
					a=a+1;
				}
			}
		}

		if (a >= 1)	printf(":(");
		else  printf("Yay!");

	return 0;
}