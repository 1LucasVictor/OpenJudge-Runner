#include <stdio.h>
#include <inttypes.h>

int main(void) {
	uint64_t X;
	uint64_t tamurayukari = 0;
	if (scanf("%" SCNu64, &X) != 1) return 1;
	tamurayukari += 1000 * (X / 500);
	X %= 500;
	tamurayukari += 5 * (X / 5);
	printf("%" PRIu64 "\n", tamurayukari);
	return 0;
}
