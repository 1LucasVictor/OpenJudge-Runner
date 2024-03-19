#include <stdio.h>
#include <math.h>

int main(void) {
    unsigned long long A;
    double B;
    unsigned long long result;
    scanf("%lld %lf", &A, &B);

    unsigned long long BLL = (unsigned long long)floor(B * 100.0);

    result = A * BLL / 100ULL;

    printf("%lld\n", result);
    return 0;
}