#include <stdio.h>

int main(void) {
    long int A;
    double B;
    double result;
    do {
        scanf("%ld", &A);
    }while(A > 1000000000000000);
    do {
        scanf("%lf", &B);
    }while(B < 0.00 && B >= 10.00);
    result = A * B;
    printf("%d\n", (int)result);
    return 0;
}