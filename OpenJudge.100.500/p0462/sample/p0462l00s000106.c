#include <stdio.h>

int main(){

    long long int A;
    double B;
    scanf("%lld %lf", &A, &B);

    printf("%lld\n", (long long int)(A*B));

    return 0;
}
