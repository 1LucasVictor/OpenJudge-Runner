#include <stdio.h>

int main(void) {
	int n;
	int x[10000] = {};
	int tmp;
	int max;
	int i;
	int j = 0;
	int flag = 0;

	while (1) {
		scanf("%d", &n);
		if (n == 0) break;

		for (i = 0; i < n; i++){
			scanf("%d", &tmp);

			if ((tmp >= 0) && (flag == 1 || flag == 0)){
				x[j] += tmp;
				flag = 1;
			}
			else if ((tmp >= 0) && flag == -1){
				j++;
				x[j] += tmp;
				flag = 1;
			}
			else if ((tmp < 0) && (flag == -1 || flag == 0)){
				x[j] += tmp;
				flag = -1;
			}
			else {
				j++;
				x[j] += tmp;
				flag = -1; 
			}
		}
		max = x[0];
		for (i = 0; i < j - 1; i++) {
			if (x[i] > max) max = x[i];
			if (x[i + 1] > max) max = x[i + 1];
			if (x[i + 2] > max) max = x[i + 2];
			if ((x[i] + x[i + 1] + x[i + 2]) > max) max = x[i] + x[i + 1] + x[i + 2];
		}
		printf("%d\n", max);
		for (i = 0; i <= j; i++){
			x[i] = 0;
		}
		j = 0;
	}

	return (0);
}