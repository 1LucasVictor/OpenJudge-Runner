#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char input[5];
	memset(input, '\0', sizeof(input));
	int counter[4];
	memset(counter, 0, sizeof(counter));
	int full_counter = 0;

	scanf("%s", &input);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (input[i] == input[j]) {
				counter[i] += 1;
			}
		}
	}

	full_counter = counter[3] + counter[2] + counter[1] + counter[0];

	if (full_counter == 8) {
		printf("Yes");
	} else{ printf("No"); }

	return 0;
}