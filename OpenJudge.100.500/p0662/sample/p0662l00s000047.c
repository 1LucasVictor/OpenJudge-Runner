#include <stdio.h>

int main(void) {
	int input[4], i;
	int time[100] = {};
	int count = 0;

	for (i = 0; i < 4; i++) {
		scanf("%d", &input[i]);
	}

	for (i = input[0]; i < input[1]; i++) {
		time[i]++;
	}

	for (i = input[2]; i < input[3]; i++) {
		time[i]++;
	}

	for (i = 0; i < 100; i++) {
		if (time[i] == 2) {
			count++;
		}
	}

	printf("%d", count);
	return(0);
}
