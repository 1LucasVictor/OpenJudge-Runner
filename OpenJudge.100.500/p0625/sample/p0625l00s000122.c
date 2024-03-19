#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>

#define MIN(a, b) (a < b ? a : b)
#define MAX(a, b) (a > b ? a : b)

int main(void) {
	uint32_t A, B;

	scanf("%"PRIu32"\n%"PRIu32, &A, &B);

	printf("%s", A <= 8 && B <= 8 ? "Yay!" : ":(");

	return 0;
}
