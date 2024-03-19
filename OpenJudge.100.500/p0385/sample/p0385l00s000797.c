#include <stdio.h>
#include <stdlib.h>

#define NUM_LIMIT 1001
#define ARR_LIMIT 200

void SumString(char number[][NUM_LIMIT], int *result, int size);

int main(void) {
	int idx;
	char input[NUM_LIMIT];
	char arr[ARR_LIMIT][NUM_LIMIT];
	int* result;
	int size;

	for (size = 0; size < ARR_LIMIT; size++) {
		scanf("%s", input);
		if (*input == '0') {
			break;
		}

		int i = 0;
		do {
			arr[size][i] = *(input + i);
			i++;
		} while (*(input + i) != '\0');
	}

	result = (int*)malloc(sizeof(int) * size);
	SumString(arr, result, size);

	for (idx = 0; idx < size; idx++) {
		printf("%d\n", *(result + idx));
	}

	free(result);
}

void SumString(char number[][NUM_LIMIT], int *result, int size) {
	int idx;
	for (idx = 0; idx < size; idx++) {
		char* tmpC = number[idx];
		int tmpSum = 0;
		do {
			tmpSum += (int)(*tmpC - 48);
		} while (*++tmpC != '\0');
		*result++ = tmpSum;
	}
}
