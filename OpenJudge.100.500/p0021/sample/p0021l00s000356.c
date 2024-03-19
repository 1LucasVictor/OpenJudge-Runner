#include <stdio.h>

int main(void) {
	int n;
	long int x[10000] = {};
	long int negative[10000] = {};
	int tmp;
	long int max[5000];
	int i;
	int j = 0;
	int k = 0;
	int l = 0;
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
		max[l] = x[0];
		for (i = 0; i < k - 1; i++) {
			if (check) {
				max[l] = negative[0];
				for (i = 1; i < j - 1; i++) {
					if (negative[i] > max[l]) {
						max[l] = negative[i];
					}
				}
			}
			else {
				if (x[i] > max[l]) {
					max[l] = x[i];
				}
				if (x[i + 1] > max[l]) {
					max[l] = x[i + 1];
				}
				if (x[i + 2] > max[l]) {
					max[l] = x[i + 2];
				}
				if ((x[i] + x[i + 1] + x[i + 2]) > max[l]) {
					max[l] = x[i] + x[i + 1] + x[i + 2];
				}
			}
		}
		for (i = 0; i <= j; i++){
			x[i] = 0;
		}
		l++;
		j = 0;
	}

	for (i = 0; i < l; i++) {
		printf("%ld\n", max[i]);
	}

	return (0);
}