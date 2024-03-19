#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>

#define MIN(a, b) (a < b ? a : b)
#define MAX(a, b) (a > b ? a : b)
#define ABSS(a, b) (a > b ? a - b : b - a)

int main(void) {
	uint32_t S[3];
	uint32_t len5Count = 0;
	uint32_t len7Count = 0;

	scanf("%"PRIu32" %"PRIu32" %"PRIu32, &S[0], &S[1], &S[2]);
	for (uint32_t idx = 0; idx < 3; idx++) {
		if (S[idx] == 5) {
			len5Count++;
		}
		else if (S[idx] == 7) {
			len7Count++;
		}
	}

	printf("%s", (len5Count == 2 && len7Count == 1 ? "YES" : "NO"));

	return 0;
}
