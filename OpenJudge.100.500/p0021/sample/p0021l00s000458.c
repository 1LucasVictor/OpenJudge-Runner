#include <stdio.h>

int main(void) {
	int n;
	long int x[10000] = {};
	long int negative[10000] = {};
	int tmp;
	long int max;
	int i;
	int j = 0;
	int k = 0;
	int flag = 0;
	int check = 1;

	while (1) {
		scanf("%d", &n);
		if (n == 0) break;

		for (i = 0; i < n; i++){
			scanf("%d", &tmp);

			if ((tmp >= 0) && (flag == 1 || flag == 0)){
				x[j] += tmp;
				flag = 1;
				check = 0;
			}
			else if ((tmp >= 0) && flag == -1){
				j++;
				x[j] += tmp;
				flag = 1;
				check = 0;
			}
			else if ((tmp < 0) && (flag == -1 || flag == 0)){
				x[j] += tmp;
				negative[k] = tmp;
				flag = -1;
				k++;
			}
			else {
				j++;
				x[j] += tmp;
				flag = -1; 
			}
		}
		max = x[0];
		for (i = 0; i < k - 1; i++) {
			if (check) {
				max = negative[0];
				for (i = 1; i < j - 1; i++) {
					if (negative[i] > max) {
						max = negative[i];
					}
				}
			}
			else {
				if (x[i] > max) {
					max = x[i];
				}
				if (x[i + 1] > max) {
					max = x[i + 1];
				}
				if (x[i + 2] > max) {
					max = x[i + 2];
				}
				if ((x[i] + x[i + 1] + x[i + 2]) > max) {
					max = x[i] + x[i + 1] + x[i + 2];
				}
			}
		}
		printf("%d\n", max);
		for (i = 0; i <= j; i++){
			x[i] = 0;
		}
		j = 0;
	}

	return (0);
}