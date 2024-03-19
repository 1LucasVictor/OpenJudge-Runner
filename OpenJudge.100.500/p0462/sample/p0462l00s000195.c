#include <stdio.h>

int main(void) {
    unsigned long long A;
    double B;
    unsigned long long result;

    scanf("%lld %lf", &A, &B);

    unsigned long long BLL = (unsigned long long)(B * 100);

    result = A * BLL / 100ULL;

    printf("%lld\n", result);
    return 0;
}