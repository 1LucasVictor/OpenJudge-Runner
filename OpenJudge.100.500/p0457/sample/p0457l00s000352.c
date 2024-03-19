#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    intmax_t N, M, K;
    intmax_t A[200000], B[200000];
    intmax_t time = 0, num_a = 0, num_b = 0, ans = 0;

    scanf("%jd%jd%jd", &N, &M, &K);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &A[i]);
        if ((time + A[i]) <= K) {
            time += A[i];
            num_a++;
        }
    }
    for (size_t i = 0; i < M; i++) {
        scanf("%jd", &B[i]);
        if ((time + B[i]) <= K) {
            time += B[i];
            num_b++;
        }
    }

    ans = num_a + num_b;

    while ((num_b < M) && (num_a > 0)) {
        num_a--;
        time -= A[num_a];

        while ((num_b < M) && ((time + B[num_b]) <= K)) {
            time += B[num_b];
            num_b++;
        }

        if (ans < (num_a + num_b))
            ans = num_a + num_b;
    }

    printf("%jd\n", ans);

    return 0;
}
