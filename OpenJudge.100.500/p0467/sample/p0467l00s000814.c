#include <stdio.h>
#include <stdbool.h>

int main(void) {
    long A, B, C;
    long K;
    long S = 0;

    scanf("%ld %ld %ld %ld", &A, &B, &C, &K);

    if(K <= A) {
        S += (K * 1);
        printf("%ld\n", S);
        return 0;
    }
    S += (A * 1);
    K -= A;

    if(K <= B) {
        S += (K * 0);
        printf("%ld\n", S);
        return 0;
    }
    S += (B * 0);
    K -= B;

    S += (K * -1);
    printf("%ld\n", S);
    return 0;
}
