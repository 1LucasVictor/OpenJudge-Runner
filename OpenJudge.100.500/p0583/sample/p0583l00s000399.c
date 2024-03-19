#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <ctype.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>
#include <math.h>

#define N_MAX (100)
#define P_MAX (100)
#define DP_ARRAY_SIZE (N_MAX * P_MAX / 32 + 1)

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define ABSS(a, b) ((a) > (b) ? (a) - (b) : (b) - (a))

int compare_sz_desc(const void* a, const void* b) {
    return *((size_t*)a) > * ((size_t*)b) ? -1 : 1;
}

int compare_f(const void* a, const void* b) {
    return *((int64_t*)a) < *((int64_t*)b) ? -1 : 1;
}

int compare_f2(const void* a, const void* b) {
    return *((uint64_t*)a) > * ((uint64_t*)b) ? -1 : 1;
}

static size_t comb(const size_t n, const size_t r) {
    size_t result = 1;

    for (size_t i = 0; i < r; i++) {
        result *= n - i;
        result /= i + 1;
    }

    return result;
}

static uint64_t combU64(const uint64_t n, const uint64_t r) {
    uint64_t result = 1;

    for (uint64_t i = 0; i < r; i++) {
        result *= n - i;
        result /= i + 1;
    }

    return result;
}

static uint64_t gcdU64(uint64_t m, uint64_t n)
{
    uint64_t temp;

    while (m % n != 0) {
        temp = n;
        n = m % n;
        m = temp;
    }

    return n;
}

static size_t gcdZu(size_t m, size_t n) {
    size_t temp;

    while (m % n != 0) {
        temp = n;
        n = m % n;
        m = temp;
    }

    return n;
}

static char S[200001];

int main(void) {
    size_t N, A, B, C, D;

    scanf("%zu %zu %zu %zu %zu\n%s", &N, &A, &B, &C, &D, S);
    A--;
    B--;
    C--;
    D--;

    if (C < D) {
        for (size_t pos = A + 1; pos <= D; pos++) {
            if (S[pos] == '#' && S[pos - 1] == '#') {
                puts("No");
                return 0;
            }
        }

        puts("Yes");
    }
    else {
        bool containsSwapSpace = false;
        for (size_t pos = A + 1; pos <= C; pos++) {
            if (S[pos] == '#' && S[pos - 1] == '#') {
                puts("No");
                return 0;
            }
            if (B + 1 <= pos && pos < D + 2) {
                if (S[pos] == '.' && S[pos - 1] == '.' && S[pos - 2] == '.') {
                    containsSwapSpace = true;
                }
            }
        }
        if (!containsSwapSpace) {
            puts("No");
            return 0;
        }

        puts("Yes");
    }

    return 0;
}
