#include <stdio.h>

int main(int argc, char **argv) {
	/*
	 * Position of antennas
	 */
	int positions[5];
	int e, k;

	for (int i = 0; i < 5; i++) {
		int tmp;
		scanf("%d", &tmp);
		positions[i] = tmp;
	}

	scanf("%d", &k);

	int flag = 0;
	for (int i = 0; i < (5 - 1); i++) {
		for (int j = i + 1; j < 5; j++) {
			if (k < (positions[j] - positions[i]))
				flag = 1;
		}
	}

	if (flag == 0) {
		printf("Yay!");
	} else {
		printf(":(");
	}

	return 0;
}