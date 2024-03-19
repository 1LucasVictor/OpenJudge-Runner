#include <stdio.h>
#include <inttypes.h>

int main(void) {
	int64_t X, A, B;
	if (scanf("%" PRId64 "%" PRId64 "%" PRId64, &X, &A, &B) != 3) return 1;
	if (B <= A) puts("delicious");
	else if (B <= A + X) puts("safe");
	else puts("dangerous");
	return 0;
}
