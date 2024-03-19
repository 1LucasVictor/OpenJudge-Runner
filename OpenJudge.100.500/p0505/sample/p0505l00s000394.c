#include <stdio.h>
#include <inttypes.h>

int64_t H;
int32_t N;
int64_t A[114514];

int main(void) {
	int32_t i;
	int64_t s = 0;
	if (scanf("%" SCNd64 "%" SCNd32, &H, &N) != 2) return 1;
	for (i = 0; i < N; i++) {
		if (scanf("%" SCNd64, &A[i]) != 1) return 1;
		s += A[i];
	}
	puts(s >= H ? "Yes" : "No");
	return 0;
}
