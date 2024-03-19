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

int main(void) {
    char S[5];

    scanf("%s", S);

    bool contExist = false;

    for (size_t i = 0; i < 3; i++) {
        if (S[i] == S[i + 1]) {
            contExist = true;
            break;
        }
    }

    puts(contExist ? "Bad" : "Good");

    return 0;
}
