#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>

#define MAX(a, b) ((a > b) ? a : b)

int main(void) {
	int32_t A, B;

	scanf("%"PRId32" %"PRId32, &A, &B);

	printf("%"PRId32, MAX(A + B, MAX(A - B, A*B)));

	return 0;
}