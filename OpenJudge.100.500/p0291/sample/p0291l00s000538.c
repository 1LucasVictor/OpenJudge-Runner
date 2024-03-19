#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, max;
	int *data;
	int cmp;
	int i, j, k;

	scanf("%d",&n);

	data = (int *)malloc(n * sizeof(int));

	for (i = 0; i < n; i++) {
		scanf("%d",&data[i]);
	}

	max = data[n - 1] - data[n - 2];

	for (i = n - 1; i > 0; i--) {

		// sort
		for (j = i + 1; j < n; j++) {
			cmp = data[j];
			k = j - 1;

			while (k >= i && data[k] > cmp) {
				data[k + 1] = data[k];
				k--;
			}

			data[k + 1] = cmp;
		}

		// max
		if (data[n - 1] - data[i - 1] > max)
			max = data[n - 1] - data[i - 1];

	}

	printf("%d\n", max);

	free(data);
	return 0;
}
