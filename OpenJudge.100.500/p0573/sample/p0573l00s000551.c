#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char input[5];
	memset(input, '\0', sizeof(input));
	int flag = 0;

	scanf("%s", input);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (input[i] == input[j]) {
				flag = 1;
				break;
			}
		}
	}

	if (flag == 1) {
		printf("Yes");
	} else{ printf("No"); }

	return 0;
}