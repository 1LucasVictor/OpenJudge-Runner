#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	int sum;
	int tmp;
	int a[5000];

	while (1){
		scanf("%d", &n);

		if (n == 0){
			break;
		}

		for (i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}

		sum = -100001;

		for (i = 0; i < n; i++){
			tmp = 0;
			for (j = i; j < n; j++){
				tmp += a[j];

				if (sum < tmp){
					sum = tmp;
				}
			}
		}

		printf("%d\n", sum);
	}

	return (0);
}