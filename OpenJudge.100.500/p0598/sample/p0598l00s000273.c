#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <ctype.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>

#define N_MAX (100)
#define P_MAX (100)
#define DP_ARRAY_SIZE (N_MAX * P_MAX / 32 + 1)

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define ABSS(a, b) ((a) > (b) ? (a) - (b) : (b) - (a))

int compare_f(const void *a, const void *b) {
	return *((size_t *)a) < *((size_t *)b) ? -1 : 1;
}

static size_t comb(const size_t n, const size_t r) {
	size_t result = 1;

	for (size_t i = 0; i < r; i++) {
		result *= n - i;
		result /= i + 1;
	}

	return result;
}

static uint64_t gcd(uint64_t m, uint64_t n)
{
	uint64_t temp;

	while (m%n != 0) {
		temp = n;
		n = m % n;
		m = temp;
	}

	return n;
}

size_t dfs(const size_t N, const size_t A, const size_t B, const size_t C, const size_t *l, const size_t idx, const size_t aCur, const size_t bCur, const size_t cCur)
{
	if (idx == N) {
		if (aCur == 0 || bCur == 0 || cCur == 0) {
			return (size_t)1000000;
		}
		else {
			return ABSS(A, aCur) + ABSS(B, bCur) + ABSS(C, cCur);
		}
	}

	const size_t ret0 = dfs(N, A, B, C, l, idx + 1, aCur, bCur, cCur);
	const size_t ret1 = dfs(N, A, B, C, l, idx + 1, aCur + l[idx], bCur, cCur) + 10;
	const size_t ret2 = dfs(N, A, B, C, l, idx + 1, aCur, bCur + l[idx], cCur) + 10;
	const size_t ret3 = dfs(N, A, B, C, l, idx + 1, aCur, bCur, cCur + l[idx]) + 10;

	return MIN(MIN(ret0, ret1), MIN(ret2, ret3));
}

int main(void) {
	size_t A, B;

	scanf("%zu %zu", &A, &B);

	printf("%zu\n", (B%A == 0 ? A + B : B - A));

	return 0;
}
