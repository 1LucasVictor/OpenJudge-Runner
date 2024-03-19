#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>

int main(void) {
	uint32_t D, N;

	scanf("%"PRIu32" %"PRIu32, &D, &N);

	if (D == 0) {
		printf("%"PRIu32, N + N / 100);
	}
	else if (D == 1) {
		printf("%"PRIu32, N * (100 + N / 10000));
	}
	else {
		printf("%"PRIu32, N * (10000 + N / 1000000));

	}

	return 0;
}
