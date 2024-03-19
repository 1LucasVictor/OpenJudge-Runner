#include <stdio.h>

int main()
{
	int i, j, k, q[6+1], flag = 1;

	for (i = 0; i < 6; i++) {
		scanf("%d", &q[i]);
	}
	k = q[5];

	for (i = 0; i < 6; i++) {
		for (j = 4; j > i; j--) {
			if (q[j] - q[i] > k) {
				flag = 0;
				break;
			}
		}
	}

	if (flag) {
		printf("Yay!");
	}
	else {
		printf(":(");
	}

	return 0;
}
