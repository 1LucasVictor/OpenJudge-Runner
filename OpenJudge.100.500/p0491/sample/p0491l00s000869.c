#include <stdio.h>
#include <stdint.h>

uint64_t solve(uint64_t n, uint64_t k) {
        uint64_t r = n % k;
        uint64_t p = k - r;
        if (p < r) {
                return p;
        } else {
                return r;
        }
}

int main() {
        uint64_t n, k;

        if (scanf("%19lu %19lu", &n, &k) == 0) {
                perror("scanf");
                return 1;
        }

        printf("%-19lu\n", solve(n, k));

        return 0;
}
