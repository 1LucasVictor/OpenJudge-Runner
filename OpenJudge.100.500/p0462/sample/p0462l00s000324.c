#include <stdio.h>

int main(void) {
    long int A;
    double B;
    long int result;
    scanf("%ld", &A);
    scanf("%lf", &B);
    result = A * B;
    printf("%ld\n", result);
    return 0;
}