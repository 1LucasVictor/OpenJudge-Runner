#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    long long int n, k, temp;

    scanf("%lld %lld", &n, &k);

    temp = (n/k);
    n = n - temp*k;

    while (abs(n) > abs(n - k)) {
        n = abs(n - k);
    }

    printf("%lld", n);

    return 0;
}