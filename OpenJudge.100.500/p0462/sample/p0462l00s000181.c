#include <stdio.h>

int main(void) {
    long int A;
    double B, C;
    long int result;
    do {
        scanf("%ld", &A);
    }while(A > 1000000000000000);
    do {
        scanf("%lf", &B);
    }while(B < 0.00 && B >= 10.00);
    C = A * B;
    result = C/1;
    printf("%ld\n", result);
    return 0;
}